#A small python program that calculates the sum of n natural numbers.

n = int(input("Enter a natural number: "))

def sumof(a):
    sum = 0
    
    for i in range(1, a + 1):
        sum = sum + i
        return sum
        
print("The sum of the naturals numbers is ", sumof(n))
