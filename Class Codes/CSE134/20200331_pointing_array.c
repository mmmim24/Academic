#include<stdio.h>
/**    0   1   2   3   4   5
a -> |45 |32 |13 |-9 | 7 | 5 |
x-> &a[4],y-> &a[2],z-> &a[4] ,b = 9
*/
int main()
{
    int a[] = {45, 32, 12, -9, 7, 5}, b;
    int i, *x, *y, *z, n = 6;
    x = a + 5; y = x - 3; z = &b;
    *z = 9; x--; (*y)++; z = x;
    for (i=0; i<n; i++)
        printf("a[%d] = %d, &>%d%c",i,*(a+i),a+i,":\n"[n==i+1]);
    printf("x = %d, *>%d, ",x,*x);
    printf("y = %d, *>%d, ",y,*y);
    printf("z = %d, *>%d, ",z,*z);
    printf("b = %d, &>%d\n",b,&b);
    return 0;
}
