import ctypes
import time

n = int(input("Enter the number for factorial calculation: "))


""" factorial_library.so is generated from C code. So_File_Path is path of 
     .so file (change accordingly).
 """


So_File_Path = "/home/ritesh/Desktop/Python_Tutorial/Assgnment on C/C_versus_Python/python_c (1)/factorial_library.so"

fact = ctypes.CDLL(So_File_Path)

start = time.time()
f = fact.factorial(n)
end= time.time()

print("Factrial of",n,"is",f)

print("Time taken =",end - start,"sec")
