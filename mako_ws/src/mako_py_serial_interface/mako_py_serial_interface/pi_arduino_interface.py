import rclpy
import serial
from rclpy.node import Node
from mako_nolang_interfaces.srv import ArduinoCommand
from mako_nolang_interfaces.msg import MakoServerMessage
 
 
class SerialInterfaceNode(Node):
    def __init__(self):
        super().__init__("serialInterfaceNode")
        self.get_logger().info("Serial Interface Node started")
        try:
            self.ser = serial.Serial('/dev/ttyACM0', 9600)
            self.ser.flush()
        except Exception as e:
            self.get_logger().error(str(e))
        self.serverMsgPublisher = self.create_publisher(
            MakoServerMessage, "server_msg", 10)
        self.ledToArduino = self.create_service(ArduinoCommand, "arduino_control", self.arduinoControl)
    
    def arduinoControl(self, request, response):
        if(request.cmd_type == "LED"):
            self.get_logger().info(request.led_exp_type)
            try:
                if(request.led_exp_type == "sf"):
                    self.ser.write(bytes('A', 'utf-8'))
                elif(request.led_exp_type == "nf"):
                    self.ser.write(bytes('B', 'utf-8'))
                elif(request.led_exp_type == "hf"):
                    self.ser.write(bytes('C', 'utf-8'))
                msg = MakoServerMessage()
                msg.type = "led_response"
                self.serverMsgPublisher.publish(msg)
            except Exception as e:
                self.get_logger().error(str(e))

        response.success = True
        return response
        
        

 
 
def main(args=None):
    rclpy.init(args=args)
    node = SerialInterfaceNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()