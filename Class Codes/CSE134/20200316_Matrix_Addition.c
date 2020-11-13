#include <stdio.h>
#define sz 10000

int a[sz][sz], b[sz][sz], c[sz][sz];/// c = a + b

int main()
{
    int n, m, i, j;
    printf("Enter the dimension of the matrices(n m): ");
    scanf("%d %d", &n, &m);/// dimension of matrices

    printf("Enter the values of Matrix a: ");
    for (i = 0; i<n; i++)
        for (j=0; j<m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the values of Matrix b: ");
    for (i = 0; i<n; i++)
        for (j=0; j<m; j++)
            scanf("%d", &b[i][j]);

    /// Matrix Addition
    for (i = 0; i<n; i++)
        for (j=0; j<m; j++)
            c[i][j]=a[i][j]+b[i][j];

    puts("Matrix c = a + b:");
    for (i = 0; i<n; i++)
        for (j=0; j<m; j++)
            printf("%4d%c", c[i][j]," \n"[j==m-1]);
    return 0;
}
/**
3 5

17 28 36 2 5
7 8 1 1 0
5 44 4 98 -9

-11 3 15 4 7
4 111 3 17 1
9 9 5 -1 -8
*/
