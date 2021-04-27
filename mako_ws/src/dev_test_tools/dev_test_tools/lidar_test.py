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
        self.subscriper = self.create_subscription(
            LaserScan, "scan", self.can_move, 10)
        self.get_logger().info("lidar started")


    def readData(self, msg):
        print(str(msg.angle_min) + "  " +
              str(msg.angle_max) + "  " + str(math.ceil((msg.angle_max - msg.angle_min) / msg.angle_increment)) 
              + "  " + str(len(msg.ranges)) + "  " + str(msg.angle_increment))
        time.sleep(3)
        x = [0] *len(msg.ranges)
        for i in range(len(msg.ranges)):
            x[i] = msg.ranges[i]*100

         r = len(msg.ranges)
        #printing the reading of the forward, left, right and backward in cm
        print("forward")
        print("----------------------------------")
        print("----------------------------------\n\n")
        print(x[r-20:r])
        print(x[0:20])
        print("\n\n")
        print("left")
        print("----------------------------------")
        print("----------------------------------\n\n")
        print(x[int(r/4)-25:int(r/4)+25])
        print("\n\n")
        print("right")
        print("----------------------------------")
        print("----------------------------------\n\n")
        print(x[int(3/4*r)-25:int(3/4*r)+25])
        print("backward")
        print("----------------------------------")
        print("----------------------------------\n\n")
        print(x[int(r/2)-25:int(r/2)+25])
    


def main(args=None):
    rclpy.init(args=args)
    node = lidarTestNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
