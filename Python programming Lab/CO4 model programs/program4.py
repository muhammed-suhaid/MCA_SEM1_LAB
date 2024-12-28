# Define a class called ‘Employee ‘with attributes name, address, designation, basic
# pay and salary.
# Calculate salary DA is 50% of Basic Pay. TA=5% of Basic Pay, HRA=2000 Gross
# salary= Basic Pay+DA+TA+HRA.
# Create 3 employees objects and find salary and print. Use constructor

class Employee:
    def __init__(self, name, address, designation, basic_pay):
        self.name = name
        self.address = address
        self.designation = designation
        self.basic_pay = basic_pay
        self.salary = 0
        
    def calculate_salary(self):
        da = 0.5 * self.basic_pay # Dearness Allowance
        ta = 0.05 * self.basic_pay # Travel Allowance
        hra = 2000 # House Rent Allowance
        self.salary = self.basic_pay + da + ta + hra
        
    def display_details(self):
        print(f"Employee Name: {self.name}, Address: {self.address},Designation: {self.designation}, Basic Pay: {self.basic_pay}, Gross Salary:{self.salary:.2f}")

# Employees
employee1 = Employee("Alice", "New York", "Manager", 30000)
employee2 = Employee("Bob", "Los Angeles", "Developer", 25000)
employee3 = Employee("Charlie", "Chicago", "Analyst", 20000)
# Calculate salaries
employee1.calculate_salary()
employee2.calculate_salary()
employee3.calculate_salary()
# Display details
print("\nEmployee Details:")
employee1.display_details()
employee2.display_details()
employee3.display_details()