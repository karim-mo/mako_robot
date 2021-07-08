import rclpy
import threading
import websocket
import json
import pyttsx3
import time
import os
from mutagen.mp3 import MP3
#from gtts import *
from rclpy.node import Node
from functools import partial
from mako_nolang_interfaces.srv import LedControl
from mako_nolang_interfaces.srv import TTSCommand
from mako_nolang_interfaces.msg import MakoServerMessage
 
class BrainNode(Node):
    def __init__(self):
        super().__init__("BrainNode")
        self.get_logger().info("Brain node started")
        self.get_logger().info("Connecting to mako server..")
        self.serverMsgSubscriber = self.create_subscription(MakoServerMessage, "server_msg", self.onServerMessage, 10)
        self.moduleMsgPublisher = self.create_publisher(MakoServerMessage, "module_msg", 10)
        try:
            self.engine = pyttsx3.init(driverName="espeak")
            #self.engine.setProperty('volume', )
            self.engine.setProperty('rate', self.engine.getProperty('rate') - 60)
            self.engine.setProperty('voice', 'english_rp')
            websocket.enableTrace(True)
            self.ws = websocket.WebSocketApp("ws://localhost:9000",
                                on_open = self.on_open,
                                on_message = self.on_message,
                                on_error = self.on_error,
                                on_close = self.on_close)
            self.wsThread = threading.Thread(target = self.ws_run).start()
        except Exception as e:
            self.get_logger().error(str(e))

    def onServerMessage(self, msg):
        self.get_logger().info(str(msg))
        if(msg.type == "module_request"):
            try:
                self.ws.send('{' + '"type":"{0}","message":"{1}"'.format(str(msg.type), str(msg.message)) + '}')
            except Exception as e:
                self.get_logger().error(str(e))
        if(msg.type == "led_response"):
            _msg = MakoServerMessage()
            _msg.type = "led_response"
            _msg.message = "led_complete"
            try:
                self.ws.send('{' + '"type":"{0}","message":"{1}"'.format(str(_msg.type), str(_msg.message)) + '}')
            except Exception as e:
                self.get_logger().error(str(e))
        

    def call_led_control(self, exp_type):
        client = self.create_client(LedControl, "cmd_matrix")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server...")

        request = LedControl.Request()
        request.exp_type = exp_type
        

        future = client.call_async(request)
        future.add_done_callback(
            partial(self.call_led_control_callback))

    def call_led_control_callback(self, future):
        try:
            response = future.result()
            if response.success:
                self.get_logger().info("Successfully sent led command to LED Control")
            else:
                self.get_logger().info("Failed to send led command to LED Control")
        except Exception as e:
            self.get_logger().error("Service call failed " + e)
    
    def tts_done_callback(self, future):
        try:
            response = future.result()
            if response.done:
                self.get_logger().info("Placeholder success")
                _msg = MakoServerMessage()
                _msg.type = "tts_response"
                _msg.message = "tts_complete"
                self.ws.send('{' + '"type":"{0}","message":"{1}"'.format(str(_msg.type), str(_msg.message)) + '}')
            else:
                self.get_logger().info("Placeholder fail")
        except Exception as e:
            self.get_logger().error("Service failed " + e)

    def on_message(self, ws, message):
        try:
            self.get_logger().info(str(message))
            msg = json.loads(message)
            if(msg["type"] == "welcome"):
                # self.engine.say('Hello, I am MAKO')
                # self.engine.runAndWait() # might need a thread
                # self.engine.say('Amazing!')
                # self.engine.runAndWait() # might need a thread
                pass
            
            if(msg["type"] == "led_control"):
                self.call_led_control(msg["exp_type"])
            if(msg["type"] == "module_response"):
                _msg = MakoServerMessage()
                _msg.type = msg["type"]
                _msg.message = msg["message"]
                _msg.module_name = msg["module_name"]
                self.moduleMsgPublisher.publish(_msg)
            if(msg["type"] == "tts_request"):
                client = self.create_client(TTSCommand, "ttsEngine")
                while not client.wait_for_service(1.0):
                    self.get_logger().warn("Waiting for Server...")

                request = TTSCommand.Request()
                request.message = msg["message"]
                

                future = client.call_async(request)
                future.add_done_callback(
                    partial(self.tts_done_callback))
            # legacy TTS
            # if(msg["type"] == "tts_request"):
            #     self.engine.say(msg["message"])
            #     self.engine.runAndWait()
            #     # Implement run and wait with a timer = file length when all files are recorded 
            #     _msg = MakoServerMessage()
            #     _msg.type = "tts_response"
            #     _msg.message = "tts_complete"
            #     try:
            #         self.ws.send('{' + '"type":"{0}","message":"{1}"'.format(str(_msg.type), str(_msg.message)) + '}')
            #     except Exception as e:
            #         self.get_logger().error(str(e))

                
                
        except Exception as e:
            self.get_logger().error("An Error Occurred While Parsing Server Message, Error: " + str(e))



    def on_error(self, ws, error):
        pass

    def on_close(self, ws):
        pass

    def on_open(self, ws):
        pass

    def ws_run(self):
        self.ws.run_forever()
 
 
def main(args=None):
    rclpy.init(args=args)
    node = BrainNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()