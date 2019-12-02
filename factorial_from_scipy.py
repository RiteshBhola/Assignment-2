import time

from scipy.special import factorial

n = int(input('Enter the number for factorial calculation: '))

start = time.time()
f = factorial(n)
end = time.time()

print("Factorial of",n,"is",f)
print("Time taken to calculate factorial is",end - start,"seconds")
