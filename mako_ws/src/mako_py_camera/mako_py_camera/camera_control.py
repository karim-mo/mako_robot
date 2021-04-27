import rclpy
import sys
import os
import cv2
sys.path.append(os.path.join(os.path.abspath(os.path.dirname(__file__)), '../../../../include/'))
import camapi.hsapi as hs
from rclpy.node import Node


class camera_control_node(Node):
    def __init__(self):
        super().__init__("camera_control_node")
        self.initCam()
    
    def initCam(self):
        try:
            camera = hs.GetDevice()
            camera.OpenDevice()
            while(1):
                image = camera.GetImage(True)
                cv2.imshow('image', image)
                cv2.waitKey(1)
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
