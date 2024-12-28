# Create class Vehicle (manufacturer). Derive class Car (model, seating capacity)
# from Vehicle. Display the details of a Car

class Vehicle:
    def __init__(self,manufacturer):
        self.manufacturer=manufacturer
        
    def display(self):
        return self.manufacturer
    
class Car(Vehicle):
    def __init__(self,manufacturer,model,seating_capacity):
        super().__init__(manufacturer)
        self.model=model
        self.seating_capacity=seating_capacity
        
    def display(self):
        print(f"Manufacturer: {self.manufacturer}\nModel: {self.model}\nSeating Capacity: {self.seating_capacity}")
        
car = Car("Porsche", "911 GT3 RS", 5)
car.display()