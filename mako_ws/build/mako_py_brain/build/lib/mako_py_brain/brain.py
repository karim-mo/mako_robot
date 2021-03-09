import rclpy
import threading
import websocket
import json
from rclpy.node import Node
 
 
class BrainNode(Node):
    def __init__(self):
        super().__init__("BrainNode")
        self.get_logger().info("Brain node started")
        self.get_logger().info("Connecting to mako server..")
        websocket.enableTrace(True)
        self.ws = websocket.WebSocketApp("ws://localhost:9000",
                              on_open = self.on_open,
                              on_message = self.on_message,
                              on_error = self.on_error,
                              on_close = self.on_close)
        self.wsThread = threading.Thread(target = self.ws_run).start()
        
        #self.ws.send("Test")


    def on_message(self, ws, message):
        self.get_logger().info(message)
        #x = json.loads(message)
        #self.get_logger().info(x["pw"])

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