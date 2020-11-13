#include<stdio.h>
#include<math.h>
long int f91(long int a)
{
    if(a<=100)
        return (f91(f91(a+11)));
    if(a>=101)
        return (a-10);
}

int main()
{
    long int n,l,sum;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        sum=f91(n);
        printf("f91(%ld) = %ld\n",n,sum);
    }
    return 0;
}
