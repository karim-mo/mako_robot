import rclpy
import pyttsx3
import os
from mutagen.mp3 import MP3
from rclpy.node import Node
from mako_nolang_interfaces.msg import MakoServerMessage
from mako_nolang_interfaces.srv import TTSCommand
 
 
class TTSNode(Node):
    def __init__(self):
        super().__init__("TTSNode")
        self.get_logger().info("TTS Node started")

        self.msgQueue = []

        # try:
        #     self.engine = pyttsx3.init(driverName="espeak")
        #     #self.engine.setProperty('volume', )
        #     self.engine.setProperty('rate', self.engine.getProperty('rate') - 60)
        #     self.engine.setProperty('voice', 'english_rp')
        # except Exception as e:
        #     self.get_logger().error(str(e))


        self.serverMsgPublisher = self.create_publisher(
            MakoServerMessage, "server_msg", 10)

        self.ttsEngine = self.create_service(TTSCommand, "ttsEngine", self.speakMessage)
    
    def speakMessage(self, request, response):
        os.system("mplayer mako_robot/TTS/{0}.mp3".format(request.message))

        # file = MP3("mako_robot/TTS/7911115_1625678808.mp3")
        # self.get_logger().info(str(file.info.length))

        # self.engine.say(request.message)
        # self.engine.runAndWait()

        response.done = True
        return response

 
 
def main(args=None):
    rclpy.init(args=args)
    node = TTSNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()