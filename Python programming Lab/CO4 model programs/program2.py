# Create a Canteen management system with the following details. Food_Item,
# Quantity_Item, Cost_Item
# Write constructor and methods for Search item, Add item, and Prepare Bill.

class CanteenManagement:
    def __init__(self, name, quantity, cost):
        self.name = name
        self.quantity = quantity
        self.cost = cost
        
    def search_item(self, food_item_name):
        if self.name == food_item_name:
            print(f"Item: {self.name}, Quantity: {self.quantity}, Cost:{self.cost}")

    def prepare_bill(self, food_item_name, quantity):
        if self.name == food_item_name:
            total_cost = self.cost * quantity
            print(f"\nBill Details:")
            print(f"Total Cost: {total_cost}")
        else:
            print(f"Item '{food_item_name}' not found.")

burger = CanteenManagement("Burger", 10, 50)
pizza = CanteenManagement("Pizza", 5, 120)
sandwich = CanteenManagement("Sandwich", 20, 30)
# Searching for an item
print("\nSearch for Item:")
burger.search_item("pizza")
pizza.search_item("Pizza")
sandwich.search_item("Pizza")
# Preparing a bill
print("\nPreparing Bill:")
burger.prepare_bill("Burger", 2)
pizza.prepare_bill("Pizza", 1)
sandwich.search_item("Pizza")