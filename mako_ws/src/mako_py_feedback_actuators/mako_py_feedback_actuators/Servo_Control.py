import rclpy
from rclpy.node import Node
from functools import partial
from mako_nolang_interfaces.srv import ServoControl
from mako_nolang_interfaces.srv import ArduinoCommand
 
class ServoControlNode(Node):
    def __init__(self):
        super().__init__("servoControlNode")
        self.get_logger().info("Servo Control Node started")
        self.servoCmdService = self.create_service(ServoControl, "cmd_servo", self.servoCmdToArduino)
    
    def servoCmdToArduino(self, request, response):
        self.get_logger().info(request.expression)
        client = self.create_client(ArduinoCommand, "arduino_control")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server...")

        req = ArduinoCommand.Request()
        req.cmd_type = "Servo"
        req.servo_expression = request.expression
        

        future = client.call_async(req)
        future.add_done_callback(
            partial(self.servoCmdToArduino_callback))

        response.success = True
        return response

    def servoCmdToArduino_callback(self, future):
        try:
            response = future.result()
            if response.success:
                self.get_logger().info("Successfully sent servo command to Serial Interface")
            else:
                self.get_logger().info("Failed to send servo command to Serial Interface")
        except Exception as e:
            self.get_logger().error("Service call failed " + e)
        
        

 
 
def main(args=None):
    rclpy.init(args=args)
    node = ServoControlNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()