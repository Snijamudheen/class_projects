#A small python program that calculates the power of any number.

def calcPow(base,exp):
    answer = base**exp
    return answer

base = int(input("enter an interger for base: "))
exp = int(input("enter an interger for exponent: "))

calcPow(base,exp)
