import rclpy
import threading
import websocket
import json
from rclpy.node import Node
from functools import partial
from mako_nolang_interfaces.srv import LedControl
 
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
        #self.call_led_control()
        
        #self.ws.send("Test")

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

    def on_message(self, ws, message):
        self.get_logger().info(message)
        msg = json.loads(message)
        if(msg["type"] == "led_control"):
            self.call_led_control(msg["exp_type"])



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