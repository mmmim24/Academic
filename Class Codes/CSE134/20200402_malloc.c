#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, i;
    double *q = (double *) malloc(sizeof(double)*10);
    p = (int *) malloc(sizeof(int)*10);
    *(p+5) = 7;
    *(p+1) = 73;
    *(p+3) = 72;
     for (i = 1; i<7; i+=2)
         printf("*(p+%d) = %d\n",i,*(p+i));
    return 0;
}
