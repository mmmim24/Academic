#include <stdio.h>

int fibo(int n)
{
    int a=0,b=1,c,i;
    for (i = 1; i<n; i++)
    {
        c = a + b; /// f(n) = f(n-2) + f(n-1)
        a = b; /// a = b ->  f(n-1)
        b = c; /// b = c -> f(n)
    }
    if(n==0) return a;
    if(n==1) return b;
    return c;
}

int main()
{
    int n;

    while(~scanf("%d", &n))
        printf("fibonacci(%d) = %d\n",n,fibo(n));
    return 0;
}
