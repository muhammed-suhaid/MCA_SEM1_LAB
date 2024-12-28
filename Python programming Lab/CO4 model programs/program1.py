# Create a blood donation management system with the following donor details.
# Donor_Name, Donor_Age, Donor_ blood group, No_of_Units (in numbers (0-5))
# Write constructor and methods for Search Donor, Add Donor and list the donors.

class BloodDonationManagement:
    def __init__(self, donor_name, donor_age, blood_group, no_of_units):
        self.donor_name = donor_name
        self.donor_age = donor_age
        self.blood_group = blood_group
        self.no_of_units = no_of_units
    def search_donor(self, search_blood_group):
        if self.blood_group.lower() == search_blood_group.lower():
            print(f"Donor Name: {self.donor_name}, Age: {self.donor_age}, BloodGroup: {self.blood_group}, Units Donated: {self.no_of_units}")
        else:
            print(f"No donor found with blood group '{search_blood_group}'.")
    def donate_blood(self, donation_units):
        if self.no_of_units + donation_units <= 5:
            self.no_of_units += donation_units
            print(f"{self.donor_name} successfully donated{donation_units} units. Total units now: {self.no_of_units}")
        else:
            print(f"Donation unsuccessful. {self.donor_name} cannot donate more than 5 units in total.")

# Donors
donor1 = BloodDonationManagement("Alice", 25, "A+", 3)
donor2 = BloodDonationManagement("Bob", 30, "B+", 2)
donor3 = BloodDonationManagement("Charlie", 35, "O-", 1)
# Searching for a donor
print("\nSearch for Donor:")
donor1.search_donor("A+")
donor2.search_donor("O-")
donor3.search_donor("AB+")
# Donating blood
print("\nDonating Blood:")
donor1.donate_blood(1)
donor2.donate_blood(3)
donor3.donate_blood(4)