import rclpy
import sys
import os
import cv2
import tensorflow as tf
from PIL import Image
import numpy as np
from mtcnn import MTCNN
import pickle
import keras
import time

sys.path.append(os.path.join(os.path.abspath(os.path.dirname(__file__)), '../../../../include/'))
import camapi.hsapi as hs
from rclpy.node import Node

#load face detector algorthm and importing the model
detector = MTCNN()
emotion_model = pickle.load(open("/home/model.pickle","rb"))
state = 0





class camera_control_node(Node):
    def __init__(self):
        super().__init__("camera_control_node")
        self.initCam()


    def rgb2gray(self,rgb):

    r, g, b = rgb[:,:,0], rgb[:,:,1], rgb[:,:,2]
    gray = 0.2989 * r + 0.5870 * g + 0.1140 * b

    return gray

    

    def detect_face(self,img):
    
        mt_res = detector.detect_faces(img)
        return_res = []
        global state
        for face in mt_res:
            x, y, width, height = face['box']
            center = [x+(width/2), y+(height/2)]
            max_border = max(width, height)

        # center alignment
            left = max(int(center[0]-(max_border/2)), 0)
            right = max(int(center[0]+(max_border/2)), 0)
            top = max(int(center[1]-(max_border/2)), 0)
            bottom = max(int(center[1]+(max_border/2)), 0)

        # crop the face
            center_img_k = img[top:top+max_border, 
                            left:left+max_border, :]
            center_img = np.array(Image.fromarray(center_img_k).resize([224, 224]))
            

            # convert to grey scale then predict using the emotion model
            grey_img = np.array(Image.fromarray(center_img_k).resize([48, 48]))
            emotion_preds = emotion_model.predict(rgb2gray(grey_img).reshape(1, 48, 48, 1))
            #print(emotion_preds)
            #print(np.argmax(emotion_preds))

            if np.argmax(emotion_preds) == 3 and not state == 3 :
                state = 3
                #winsound.PlaySound("C:/Users/abdel/Downloads/happy.wav",winsound.SND_FILENAME)
            elif np.argmax(emotion_preds) == 1:
                state = 0
            #  time.sleep(10)
            # output to the cv2
            return_res.append([top, right, bottom, left, emotion_preds])

    return return_res

    
    def initCam(self):
        try:
            camera = hs.GetDevice()
            camera.OpenDevice()
            emotion_dict = {
                0: 'Anger',
                1: 'Neutral', 
                2: 'Fear',
                3: 'Happy',
                4: 'Sad',
                5: 'Surprise'
            # 6: 'Contempt'
            }
            while(1):
                frame = camera.GetImage(True)
            # Convert the image from BGR color (which OpenCV uses) to RGB color 

                rgb_frame = frame[:, :, ::-1]
            # Find all the faces in the current frame of video
                face_locations = detect_face(rgb_frame)


                # Display the results
                for top, right, bottom, left, emotion_preds in face_locations:
                # Draw a box around the face
                    cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
                    
                    cv2.putText(frame, 'Emotion: {}({:.3f})'.format(emotion_dict[np.argmax(emotion_preds)], 
                                                                    np.max(emotion_preds)), (left, top-40), 
                                cv2.FONT_HERSHEY_SIMPLEX, 0.5, (36,255,12), 1)

                cv2.imshow('image', frame)
                if cv2.waitKey(1) & 0xFF == ord('q'):
                    break
        except Exception as e:
            print(e)
        finally:
            camera.CloseDevice()
            print("cam closed")

        



def main(args=None):
    rclpy.init(args=args)
    node = camera_control_node()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
