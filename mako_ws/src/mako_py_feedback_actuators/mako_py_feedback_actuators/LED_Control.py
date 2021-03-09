import rclpy
from rclpy.node import Node
from mako_nolang_interfaces.srv import LedControl
from mako_nolang_interfaces.srv import ArduinoCommand
 
class LEDControlNode(Node):
    def __init__(self):
        super().__init__("ledControlNode")
        self.get_logger().info("LED Control Node started")
        self.ledCmdService = self.create_service(LedControl, "cmd_matrix", self.ledCmdToArduino)
    
    def ledCmdToArduino(self, request, response):
        self.get_logger().info(request.exp_type)
        client = self.create_client(ArduinoCommand, "arduino_control")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server...")

        req = ArduinoCommand.Request()
        req.cmd_type = "LED"
        req.led_exp_type = request.exp_type
        

        future = client.call_async(req)
        future.add_done_callback(
            partial(self.ledCmdToArduino_callback))

        response.success = True
        return response

    def ledCmdToArduino_callback(self, future):
        try:
            response = future.result()
            if response.success:
                self.get_logger().info("Successfully sent led command to Serial Interface")
            else:
                self.get_logger().info("Failed to send led command to Serial Interface")
        except Exception as e:
            self.get_logger().error("Service call failed " + e)
        
        

 
 
def main(args=None):
    rclpy.init(args=args)
    node = LEDControlNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()