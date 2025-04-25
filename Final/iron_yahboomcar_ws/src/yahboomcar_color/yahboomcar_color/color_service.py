import rclpy
from rclpy.node import Node

from yahboomcar_msgs.srv import GetColor
from yahboomcar_msgs.msg import ColorData

class ColorServer(Node):
    def __init__(self):
        super().__init__("colorServer")

        #'''
        self.hue = 0
        self.saturation = 0
        self.value = 0
        #'''
        
        # create a subscription to get the color from colorHSV
        self.color_sub = self.create_subscription(ColorData, "/color_data", self.color_sub_callback, 1)
       
        # create a service that returns the english name of the color from colorHSV
        self.color_cli = self.create_service(GetColor, "getColor", self.get_color_callback)

    # makes a copy of the subscription data
    def color_sub_callback(self, msg):
        self.hue = msg.hue
        self.saturation = msg.saturation
        self.value = msg.value

    # reads subscription data, and gives the appropriate color
    def get_color_callback(self, req, res):
        color = ""
        if self.value < 60: # if color is too dark, say its black
            color = "black"
        else: # color is not black
            if self.saturation < 80: # check to see if color is monochrome
                if self.value < 160:
                    color = "gray"
                else:
                    color = "white"
            else: # not monochrome
                if self.hue < 11: # lower range for red
                    color = "red"
                elif self.hue < 26:
                    color = "orange"
                elif self.hue < 35:
                    color = "yellow"
                elif self.hue < 86:
                    color = "green"
                elif self.hue < 101:
                    color = "cyan"
                elif self.hue < 131:
                    color = "blue"
                elif self.hue < 160:
                    color = "purple"
                else: # upper range for red
                    color = "red"
        res.color = color
        return res

def main(args=None):
    # initialize ros2
    rclpy.init(args=args)
    
    # initialize the server
    ser_obj = ColorServer()
    ser_obj.get_logger().info("Color Server Started")
    
    # keep the node running
    rclpy.spin(ser_obj)
    
    # cleanly shut down everything when we're done
    ser_obj.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
                
            
