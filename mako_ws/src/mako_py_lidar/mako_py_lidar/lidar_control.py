import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import time
import math


class lidar_control_node(Node):
    def __init__(self):
        super().__init__("lidar_control_node")
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
        
    def can_move(self, msg):
        #print("hello")
        x = [0] *len(msg.ranges)
        for i in range(len(msg.ranges)):
            x[i] = msg.ranges[i]*100
        ra = len(msg.ranges)
        f = x[ra-20:ra] + x[0:20]
        l = x[int(ra/4)-25:int(ra/4)+25]
        r = x[int(3/4*ra)-25:int(3/4*ra)+25]
        b = x[int(ra/2)-25:int(ra/2)+25]
        s = 0
        x = 0

        for i in f:
            if(i != math.inf):
                s += i
                x += 1
        a = (s/x)
        print("distance of forward: ")
        print(a)
        s = 0
        x = 0
        if(a <= 50):
            print("too close object on forward")
        else:
            print("you can move forward")  

        for i in r:
            if(i != math.inf):
                s += i
                x += 1
        a = (s/x)
        print("distance of right: ")
        print(a)
        s = 0
        x = 0
        if(a  <= 50):
            print("too close object to the right")
        else:
            print("you can move to the right")

        for i in l:
            if(i != math.inf):
                s += i
                x += 1
        a = (s/x)
        print("distance of the left: ")
        print(a)
        s = 0
        x = 0
        if(a  <= 50):
            print("too close object to the left")
        else:
            print("you can move to the left")

        for i in b:
            if(i != math.inf):
                s += i
                x += 1
        a = (s/x)
        print("distance of backward ")
        print(a)
        s = 0
        x = 0
        if(a  <= 50):
            print("too close object to the back")
        else:
            print("you can move to the back")
        time.sleep(5)

        
    


def main(args=None):
    rclpy.init(args=args)
    node = lidar_control_node()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
