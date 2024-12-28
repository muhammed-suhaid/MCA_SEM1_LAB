# Define a class ‘Student’ with the following attributes name, marks of 4 subjects
# (Max marks: 25), total and grade.
# Note:
# If total marks is less than 35. Grade=’F’ (Failed). If total marks is greater than 35
# and less than 50, Grade=’C’. If total marks is greater than 50 and less than 60,
# Grade=’B’. If total marks is greater than 60 and less than 70, Grade=’A’. If total
# marks is greater than 70, Grade=’S’
# Create 3 sample student objects and print the details of students using
# constructor.

class Student:
    def __init__(self, name, subject1, subject2, subject3, subject4):
        self.name = name
        self.subject1 = subject1
        self.subject2 = subject2
        self.subject3 = subject3
        self.subject4 = subject4
        self.total = 0
        self.grade = ''
        
    def calculate_total_and_grade(self):
        self.total = self.subject1 + self.subject2 + self.subject3 +self.subject4
        if self.total < 35:
            self.grade = 'F'
        elif 35 <= self.total < 50:
            self.grade = 'C'
        elif 50 <= self.total < 60:
            self.grade = 'B'
        elif 60 <= self.total < 70:
            self.grade = 'A'
        else:
            self.grade = 'S'
            
    def display_details(self):
        print(f"Student Name: {self.name}, Total Marks: {self.total}, Grade:{self.grade}")
        
# Students
student1 = Student("Alice", 20, 18, 15, 22)
student2 = Student("Bob", 25, 20, 23, 24)
student3 = Student("Charlie", 10, 12, 8, 9)
# Calculate totals and grades
student1.calculate_total_and_grade()
student2.calculate_total_and_grade()
student3.calculate_total_and_grade()
# Display details
print("\nStudent Details:")
student1.display_details()
student2.display_details()
student3.display_details()