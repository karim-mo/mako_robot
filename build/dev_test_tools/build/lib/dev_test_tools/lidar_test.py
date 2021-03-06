import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
 
 
class lidarTestNode(Node):
    def __init__(self):
        super().__init__("lidarTestNode")
        self.sub = self.create_subscription(LaserScan, "scan", self.readData, 10)

 
    def readData(self, msg):
        print(msg.ranges)

def main(args = None):
    rclpy.init(args = args)
    node = lidarTestNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()