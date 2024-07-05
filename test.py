import random as rd
import numpy as np

def get_random():
    return rd.randint(-10,10)/100

def average(ax):
    avg = 0
    for i in ax:
        avg += i
    avg /= len(ax)
    return avg

x = []
N = 100
for i in range(N):
    x.append(get_random())

mean = average(x)

stdev = 0
for i in range(N):
    stdev += pow(x[i] - mean, 2)

stdev = np.sqrt(stdev/(N - 1))
print("Python Deviation: ", stdev)


'''
def multiply(aa, bb, cc):
    return aa*bb*cc

x = 2.33
y = 1.66
z = 4.21

M = multiply(x, y, z)
print(M)
'''

'''
x = []
A = 12
N = 20

for i in range(A, N):
    x.append(i)

print(x, len(x))
'''

'''
A = 12
N = 20

for i in range(A, N):
    print(i, end=' ')
print('\n')
'''

'''
def add_numbers(u, v):
    return u + v + 4

a = 5
b = 3
c = add_numbers(a, b)
print('Python : ', c)
'''

'''
def join_string(a, b):
    return a + b + ' | Verified'


sampleA = 'This is a Python string'
sampleB = ' | Python Rocks'

sampleC = join_string(sampleA, sampleB)
print(sampleC)
'''