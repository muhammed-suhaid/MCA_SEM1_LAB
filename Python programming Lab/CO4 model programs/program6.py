# Create a class Circle (radius). Add member functions to compute area and
# perimeter of a circle.

import math

class Circle:
    def __init__(self,radius):
        self.radius=radius
    
    def area(self):
        print(f"Area : {math.pi * self.radius ** 2}")
    
    def perimeter(self):
        print(f"Perimeter : {2 * math.pi * self.radius} ")
    
circle = Circle(3)
circle.area()
circle.perimeter()