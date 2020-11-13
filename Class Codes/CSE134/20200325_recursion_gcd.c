#include <stdio.h>
/**
a = b%a
b = a
*/
int gcd(int a, int b)
{
    if(a==0) return b;
    return gcd(b%a, a);
}

int main()
{
    int a, b;
    while(~scanf("%d %d", &a, &b))
        printf("GCD(%d, %d) = %d\n",a,b,gcd(a,b));
    return 0;
}
