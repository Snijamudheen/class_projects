#This is a small python program that uses the concept of dictionary to display the names and salaries of employees in a firm.

num = int(input("Enter the number of employees: "))
count = 1
employee = dict()

while count <= num:
    name = input("Enter the name of the employee: ")
    salary = int(input("Enter the salary of the employee: "))
    employee[name] = salary
    count += 1
    
print("\nEMPLOYEES_NAME\tSALARY")

for key in employee:
    print(key, '\t\t', employee[key])
