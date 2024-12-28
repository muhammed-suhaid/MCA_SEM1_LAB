# Create a class Employee (name, designation, salary). Include the member
# function to increment salary of an employee by 10%. Display the new details of
# the employee

class Employee:
    def __init__(self,name,designation,salary):
        self.name=name
        self.designation=designation
        self.salary=salary
        
    def increment_salary(self):
        self.salary+=self.salary*0.10
        
    def display(self):
        print(f"Name: {self.name}\nDesignation: {self.designation}\nSalary: {self.salary:.2f}")
        
employee = Employee("Suhaid", "Flutter Developer", 50000)
print("----------Before Increment----------\n")
employee.display()

employee.increment_salary()

print("\n----------After Increment----------\n")
employee.display()