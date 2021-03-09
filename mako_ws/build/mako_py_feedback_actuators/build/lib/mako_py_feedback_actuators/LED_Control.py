import rclpy
from rclpy.node import Node
from mako_nolang_interfaces.srv import LedControl

 
 
class LEDControlNode(Node):
    def __init__(self):
        super().__init__("ledControlNode")
        self.get_logger().info("LED Control Node started")

 
 
def main(args=None):
    rclpy.init(args=args)
    node = LEDControlNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()