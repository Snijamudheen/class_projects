#This is a small python program that checks whether a string is a palindrome or not.

def reversestr(str):
    return str[::-1]
str = input("enter a string: ")
    
answer = reversestr(str)
if answer == str:
    print("the string is a palindrome.")
else:
    print("the string is not a palindrome.")
