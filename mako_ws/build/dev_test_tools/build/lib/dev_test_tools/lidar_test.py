import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import time
import math


class lidarTestNode(Node):
    def __init__(self):
        super().__init__("lidarTestNode")
        self.get_logger().info("lidar started")
        self.sub = self.create_subscription(
            LaserScan, "scan", self.readData, 10)

    def readData(self, msg):
        print(str(msg.angle_min) + "  " +
              str(msg.angle_max) + "  " + str(math.ceil((msg.angle_max - msg.angle_min) / msg.angle_increment)) 
              + "  " + str(len(msg.ranges)) + "  " + str(msg.angle_increment))
        time.sleep(3)


def main(args=None):
    rclpy.init(args=args)
    node = lidarTestNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
