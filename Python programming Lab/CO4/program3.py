class Rectangle:
    def __init__(self, length, width):
        self.__length = length
        self.__width = width

    def area(self):
        return self.__length * self.__width

    def __lt__(self, obj):
        return self.area() < obj.area()
            
    def display(self):
        print(f"Area: {self.area()}")


rect1 = Rectangle(10, 2)
rect2 = Rectangle(10, 3)

print("---------- Rectangle 1 ----------")
rect1.display()
print("---------- Rectangle 2 ----------")
rect2.display()

print("\n---------- Area Comparison ----------")
if rect1<rect2:
    print("Rectangle 2 has a greater area.")
else:
    print("Rectangle 1 has a greater area.")

