import time


def factorial(n):
	fact =1
	for i in range(n):
		fact=fact*(i+1)
	return(fact)


n = int(input('Enter the number for factorial calculation: '))

start = time.time()
print("Factorial of",n,"is",factorial(n)) 
end = time.time()

print("Time taken to calculate factorial is",end - start ,"seconds")
