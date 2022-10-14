import sys
from tabulate import tabulate


n = 3
n = int(input('Number of variables: '))
a = [
    [25,5,1,106.8],
    [64,8,1,177.2],
    [144,12,1,279.2]
]
a = [[0 for i in range(n+1)] for j in range(n)] 
x = [0 for i in range(n)]



print('Enter Matrix in following form:\n')
for i in range(n):
    for j in range(n+1):
        print('a'+str(i+1)+str(j+1), end = ' ')
    print()
print()

for i in range(n):
    for j in range(n+1):
        a[i][j] = float(input( 'a'+str(i+1)+str(j+1)+' = '))



print('Given Matrix')
print(tabulate(a))


def naive_gaussian():
    for i in range(n):
        if a[i][i] == 0.0:
            sys.exit('Divide by zero!')

        for j in range(i+1, n):
            ratio = a[j][i]/a[i][i]
            for k in range(n+1):
                a[j][k] = a[j][k] - ratio * a[i][k]

            

def partial_pivoting():
    for i in range(n):
        if a[i][i] == 0.0:
            sys.exit('Divide by zero!')
        
        mx = a[i][i]
        row = i
        for j in range(i+1,n) :
            if(a[j][i] > mx) :
                mx = a[j][i]
                row = j
        for j in range(n+1) :
            temp = a[i][j]
            a[i][j] = a[row][j]
            a[row][j] = temp

        for j in range(i+1, n):
            ratio = a[j][i]/a[i][i]
            for k in range(n+1):
                a[j][k] = a[j][k] - ratio * a[i][k]
        

            


naive_gaussian()
# partial_pivoting()


#back substitution
x[n-1] = a[n-1][n]/a[n-1][n-1]
for i in range(n-2,-1,-1):
    x[i] = a[i][n]
    for j in range(i+1,n):
        x[i] = x[i] - a[i][j]*x[j]
    x[i] = x[i]/a[i][i]
#back substitution

    
    
print('\nSoln: ')
print(tabulate(a))
for i in range(n):
    print('X%d = %0.2f' %(i+1,x[i]), end = '\t')
print()





