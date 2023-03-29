#This is a simple calculator that lets you add, subtract, divide and multiply two numbers.

num1 = float(input("Enter first number: "))
operation = input("Enter operation: ")
num2 = float(input("Enter second number: "))
 
if operation == "+" :
    print(num1 + num2)
elif operation == "-" :
    print(num1 - num2)
elif operation == " * " :
    print(num1 * num2)
elif operation == "/" :
    print(num1 / num2)
else: 
    print("Invalid operation") 
