#include <stdio.h>

int main()
{
    int a = 5, b = 3,c = -4, i;
    long long d = ((long long)a<<34);
    printf("a << 1 = %d\n",a<<1);
    printf("a << 2 = %d\n",a<<2);
    printf("a << b = %d\n",a<<b);
    printf("a >> 1 = %d\n",a>>1);
    printf("a >> 2 = %d\n",a>>2);
    printf("a >> b = %d\n",a>>b);
    printf("d = %lld\n",d);
    for (i=0; i<5; i++)
    {
        printf("c << %d = %d\n",i,c<<i);
        printf("c >> %d = %d\n",i,c>>i);
    }

    return 0;
}
