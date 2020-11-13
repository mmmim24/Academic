#include<stdio.h>
int ar[2] = {3,4};
int main()
{
    int a = 5, b = 12, i;
    printf("a&b = %d\n",a&b);
    printf("a|b = %d\n",a|b);
    printf("a^b = %d\n",a^b);
    /// your operations go here
    /// a^=b^=a^=b;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a = %d, b = %d\n",a,b);

    for (i=0; i<2; i++)
        ar[i]^=ar[0]^=ar[i]^=ar[0];
    printf("ar[0] = %d, ar[1] = %d\n",ar[0],ar[1]);
    return 0;
}
