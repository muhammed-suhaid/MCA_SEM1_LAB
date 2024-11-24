class Rectangle:

    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth

    def area(self):
        return self.length * self.breadth

    def perimeter(self):
        return 2 * (self.length + self.breadth)

    def display(self):
        print(f"Length: {self.length}")
        print(f"Breadth: {self.breadth}")
        print(f"Area: {self.area()}")
        print(f"Perimeter: {self.perimeter()}")

    def compare_area(self, obj):
        if self.area() > obj.area():
            print("Rectangle 1 has a greater area.")
        elif self.area() < obj.area():
            print("Rectangle 2 has a greater area.")
        else:
            print("Both rectangles have the same area.")

rect1 = Rectangle(5, 1)
rect2 = Rectangle(2, 5)

print("---------- Rectangle 1 ----------")
rect1.display()

print("\n---------- Rectangle 2 ----------")
rect2.display()

print("\n---------- Area Comparison ----------")
rect1.compare_area(rect2)
