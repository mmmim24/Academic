#include<stdio.h>
int main()
{
long long n;
while(scanf("%lld",&n)==1)
{
if(n<0&&n%2==0) printf("Underflow!\n");
else if(n<0&&n%2!=0) printf("Overflow!\n");
else if(n==0||n<=7) printf("Underflow!\n");
else if(n==8) printf("40320\n");
else if(n==9) printf("362880\n");
else if(n==10) printf("3628800\n");
else if(n==11) printf("39916800\n");
else if(n==12) printf("479001600\n");
else if(n==13) printf("6227020800\n");
else if(n>13) printf("Overflow!\n");
}
return 0;
}
