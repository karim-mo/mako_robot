import rclpy
from rclpy.node import Node
from functools import partial
from mako_nolang_interfaces.srv import MotorControl
from mako_nolang_interfaces.srv import ArduinoCommand
 
class MotorControlNode(Node):
    def __init__(self):
        super().__init__("motorControlNode")
        self.get_logger().info("Motor Control Node started")
        self.motorCmdService = self.create_service(MotorControl, "cmd_motor", self.motorCmdToArduino)
    
    def motorCmdToArduino(self, request, response):
        client = self.create_client(ArduinoCommand, "arduino_control")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server...")

        req = ArduinoCommand.Request()
        req.cmd_type = "Motor"
        req.motor_direction = request.direction
        

        future = client.call_async(req)
        future.add_done_callback(
            partial(self.motorCmdToArduino_callback))

        response.success = True
        return response

    def motorCmdToArduino_callback(self, future):
        try:
            response = future.result()
            if response.success:
                self.get_logger().info("Successfully sent motor command to Serial Interface")
            else:
                self.get_logger().info("Failed to send motor command to Serial Interface")
        except Exception as e:
            self.get_logger().error("Service call failed " + e)
        
        

 
 
def main(args=None):
    rclpy.init(args=args)
    node = MotorControlNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()