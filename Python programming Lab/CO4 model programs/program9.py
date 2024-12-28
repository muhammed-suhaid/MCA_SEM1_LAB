# Create a class Circle (radius). Derive the class Cylinder (height) from Circle.
# Include the method to compute volume of the Cylinder. (V= π r2 h)

import math

class Circle:
    def __init__(self,radius):
        self.radius=radius
        
    def area(self):
        return math.pi * self.radius ** 2
    
class Cylinder(Circle):
    def __init__(self,radius,height):
        super().__init__(radius)
        self.height=height
        
    def volume(self):
        print(f"Volume :{self.area() * self.height}")
        
cylinder = Cylinder(5, 10)
cylinder.volume()
        
