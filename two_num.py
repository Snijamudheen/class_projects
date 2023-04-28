#This is a python program that takes two number from the user and swaps them.

num1 = int(input("enter the first number: "))
num2 = int(input("enter the second number: "))

print("/nNumbers before swapping: ")
print("first number: ",num1)
print("second number: ",num2)

(num1,num2) = (num2,num1)

print("/nNumbers after swapping: ")
print("first number: ",num1)
print("second number: ",num2)
