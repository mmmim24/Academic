import sys
from tabulate import tabulate

n = 3
a = [
    [25,5,1,106.8],
    [64,8,1,177.2],
    [144,12,1,279.2]
]

n = int(input('Number of variables: '))
a = [[0 for i in range(n+1)] for j in range(n)] 
I = [[0 for i in range(n)] for j in range(n)]

b = [[0 for i in range(n)] for j in range(n)]
u = [[0 for i in range(n)] for j in range(n)]
l = [[0 for i in range(n)] for j in range(n)]

c = [0 for i in range(n)]
x = [0 for i in range(n)]
z = [0 for i in range(n)]

d = [0 for i in range(n)]
p = [0 for i in range(n)]
q = [0 for i in range(n)]


#generating identity matrix
for i in range(n):
    for j in range(n):
        if(i==j):
            l[i][j] = I[i][j] = 1
        else:
            l[i][j] = I[i][j] = 0

print('Enter Matrix in following form:\n')
for i in range(n):
    for j in range(n+1):
        print('a'+str(i+1)+str(j+1), end = ' ')
    print()
print()

for i in range(n):
    for j in range(n+1):
        a[i][j] = float(input( 'a'+str(i+1)+str(j+1)+' = '))

#initializing upper triangular matrix
for i in range(n):
    for j in range(n):
        u[i][j] = a[i][j]

#initializing constants
for i in range(n):
    c[i] = a[i][n]

#calculating upper and lower unit triangular matrix
for i in range(n):
    if u[i][i] == 0.0:
        sys.exit('Divide by zero!')
        
    for j in range(i+1, n):
        ratio = u[j][i]/u[i][i]
        l[j][i] = ratio
        for k in range(n):
            u[j][k] = u[j][k] - ratio * u[i][k]
        


def LUDec(l,u,c,x,z):
    z[0] = c[0]
    for i in range(1,n):
        z[i] = c[i]
        for j in range(i-1,-1,-1):
            z[i] = z[i] - l[i][j]*z[j]
    x[n-1] = z[n-1]/u[n-1][n-1]
    for i in range(n-2,-1,-1):
        x[i] = z[i]
        for j in range(i+1,n):
            x[i] = x[i] - u[i][j]*x[j]
        x[i] = x[i]/u[i][i]


#inverse matrix
def inverse():
    LUDec(l,u,c,x,z)
    for i in range(n):
        for j in range(n):
            d[j] = I[j][i]
        LUDec(l,u,d,p,q)
        for j in range(n):
            b[j][i] = p[j]

# LUDec(l,u,c,x,z)
inverse()
print('Inverse Matrix')
print(tabulate(b))
# print('upper triangular matrix')
# print(tabulate(u))
# print('lower unit trian matrix')
# print(tabulate(l))




print('\nSoln: ')
# for i in range(n):
#     print('C%d = %0.2f' %(i+1,c[i]), end = '\t')
# print()
# for i in range(n):
#     print('Z%d = %0.2f' %(i+1,z[i]), end = '\t')
# print()
for i in range(n):
    print('X%d = %0.2f' %(i+1,x[i]), end = '\t')
print()

print()
