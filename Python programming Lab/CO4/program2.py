class BankAccount:

    def __init__(self, accNumber, name, typeOfAccount, balance):
        self.accNumber = accNumber
        self.name = name
        self.typeOfAccount = typeOfAccount
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"\tDeposit Successful! New Balance: {self.balance}")

    def withdraw(self, amount):
            self.balance -= amount
            print(f"\tWithdrawal Successful! New Balance: {self.balance}")

    def display_balance(self):
        print(f"\tCurrent Balance: {self.balance}")

    def accDetails(self):
        print("Account Details:")
        print(f"\tAccount Number: {self.accNumber}")
        print(f"\tAccount Name: {self.name}")
        print(f"\tType of Account: {self.typeOfAccount}")
        print(f"\tBalance: {self.balance}")


cust1 = BankAccount(1001, "Alhan", "Savings", 10000)

print("--------------- Bank Statements ---------------\n")
cust1.accDetails()

print("\nStatement 1: Deposit")
cust1.deposit(500)

print("\nStatement 2: Withdraw")
cust1.withdraw(2500)

print("\nStatement 3: Display Balance")
cust1.display_balance()
