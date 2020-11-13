#include <stdio.h>
/**
f(n) = f(n-1) + f(n-2), f(0) = 0, f(1) = 1
*/
int fibo(int n)
{
    printf("n = %d.\n", n);
    if(n<2) return n;
///    if(n==0) return 0;
///    if(n==1) return 1;
    int ret = fibo(n-1) + fibo(n-2);
    printf("n = %d, ret = %d\n", n, ret);
    return ret;
}
/**
f(4) = f(4-1) + f(4-2) = f(3) + f(2)
f(3) = f(3-1) + f(3-2) = f(2) + f(1)
f(2) = f(2-1) + f(2-2) = f(1) + f(0)
f(1) = 1
f(0) = 0
*/
int main()
{
    int n;

    while(~scanf("%d", &n))
        printf("fibonacci(%d) = %d\n",n,fibo(n));
    return 0;
}
