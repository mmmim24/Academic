#include<stdio.h>
#define SZ 5+6
#define SZ2 SZ+SZ

int main()
{
    long long int x = 6*/** symbolic constants */SZ2*3, k; /// Variable declaration
    scanf("%lld", &k);
    printf("x = %lld, takes %d bytes\n", x+k, sizeof(x));
    return 0;
}
