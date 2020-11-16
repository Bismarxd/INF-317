from multiprocessing import Pool
import math

def Numero(n):
    sum = 0
    
    
    for valor in range(1, n):
        sum = sum + (1 / valor ** 2)
        
    pi = math.sqrt(sum*6)
    return pi

print(Pool().map(Numero, [10000, 100000, 100]))
