#include<stdio.h>
#include<stdlib.h>

int main()
{
    int j, *p[5], i, n;
//    double *q = (double *) malloc(sizeof(double)*10);
//    p = (int *) malloc(sizeof(int)*5*20); /// int x[10][20]
    for(i=0;i<5; i++)
    {
        scanf("%d", &n);
        p[i] = malloc(sizeof(int)*n);
        printf("p[%d] = %d\n", i, p[i]);
        for (j=0; j<n; j++)
        {
            scanf("%d", *(p+i)+j);
            printf("i = %d, j = %d, add = %d\n", i, j, *(p+i)+j);
        }
    }
    return 0;
}
/**
4 3 8 111 -1
1 3
10 34 3453 5 345 34 5 4 54 5 3
3 2 1 2
1 4
*/
