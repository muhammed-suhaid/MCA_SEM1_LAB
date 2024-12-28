# Define a class ‘Salesman’ with attributes salesman name, place, sales amount and
# commission. The company calculates the commission of a salesman according to
# the following formula.
# Commission=8% if sales <2000. Commission=10% if sales >=2000 but <=5000.
# Commission=12% if sales exceed 5000.
# Create 3 salesman objects and find commission for their sales and print. Use
# Constructor

class Salesman:
    def __init__(self, salesman_name, place, sales_amount):
        self.salesman_name = salesman_name
        self.place = place
        self.sales_amount = sales_amount
        self.commission = 0
        
    def calculate_commission(self):
        if self.sales_amount < 2000:
            self.commission = self.sales_amount * 0.08
        elif 2000 <= self.sales_amount <= 5000:
            self.commission = self.sales_amount * 0.10
        else:
            self.commission = self.sales_amount * 0.12
    def display_details(self):
        print(f"Salesman Name: {self.salesman_name}, Place: {self.place},Sales Amount: {self.sales_amount}, Commission: {self.commission:.2f}")
# Salesmen
salesman1 = Salesman("Alice", "New York", 1800)
salesman2 = Salesman("Bob", "Los Angeles", 3000)
salesman3 = Salesman("Charlie", "Chicago", 6000)
# Calculate commissions
salesman1.calculate_commission()
salesman2.calculate_commission()
salesman3.calculate_commission()
# Display details
print("\nSalesman Details:")
salesman1.display_details()
salesman2.display_details()
salesman3.display_details()