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
            try:
                if(request.led_exp_type == "nf"):
                    self.ser.write(bytes('A', 'utf-8'))
                elif(request.led_exp_type == "hf"):
                    self.ser.write(bytes('B', 'utf-8'))
                elif(request.led_exp_type == "sf"):
                    self.ser.write(bytes('C', 'utf-8'))
                elif(request.led_exp_type == "af"):
                    self.ser.write(bytes('D', 'utf-8'))
                elif(request.led_exp_type == "ff"):
                    self.ser.write(bytes('E', 'utf-8'))
                # msg = MakoServerMessage()
                # msg.type = "led_response"
                # self.serverMsgPublisher.publish(msg)
            except Exception as e:
                self.get_logger().error(str(e))
        if(request.cmd_type == "Servo"):
            try:
                if(request.servo_expression == "right_up"):
                    self.ser.write(bytes('F', 'utf-8'))
                    self.ser.write(bytes('T', 'utf-8'))
                elif(request.servo_expression == "left_up"):
                    self.ser.write(bytes('H', 'utf-8'))
                    self.ser.write(bytes('U', 'utf-8'))
                elif(request.servo_expression == "right_reset"):
                    self.ser.write(bytes('G', 'utf-8'))
                    self.ser.write(bytes('R', 'utf-8'))
                elif(request.servo_expression == "left_reset"):
                    self.ser.write(bytes('J', 'utf-8'))
                    self.ser.write(bytes('Y', 'utf-8'))
            except Exception as e:
                self.get_logger().error(str(e))
        if(request.cmd_type == "Motor"):
            try:
                if(request.motor_direction == "up"):
                    self.ser.write(bytes('Z', 'utf-8'))
                elif(request.motor_direction == "down"):
                    self.ser.write(bytes('X', 'utf-8'))
                elif(request.motor_direction == "left"):
                    self.ser.write(bytes('V', 'utf-8'))
                elif(request.motor_direction == "right"):
                    self.ser.write(bytes('C', 'utf-8'))
                elif(request.motor_direction == "stop"):
                    self.ser.write(bytes('B', 'utf-8'))
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