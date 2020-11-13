#include <stdio.h>

int fact(int n)
{
    int ret=1, i;
    for (i = 2; i<=n; i++)
        ret*=i; /// f(n) = n * f(n-1)
    return ret;
}

int main()
{
    int n;

    while(~scanf("%d", &n))
        printf("factorial(%d) = %d\n",n,fact(n));
    return 0;
}
