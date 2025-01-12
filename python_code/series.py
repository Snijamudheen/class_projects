#A python program that calculates the sum of the series: 1 + 1/2 + 1/3 + 1/4...+ 1/n

n = int(input("Enter an integer: "))
sum = 0
for num in range(1, n + 1):
      sum = sum + (1 / num)
print("The sum of the series is ", round(sum, 2))
