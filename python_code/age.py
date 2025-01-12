#This program asks the user the name and age. Then, it prints a message that tells the user the year in which they will turn 100 years old.

name = input("enter ur name: ")
print(name)
age = int(input("how old r u? "))
print(age)
year = (2020 - age) + 100
print( name + "will turn 100 years old in year " + str(year) )
