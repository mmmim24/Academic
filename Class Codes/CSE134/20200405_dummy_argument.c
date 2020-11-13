#include<stdio.h>

int calc(char x, int a, int b)
{
    if(x=='+')return a+b;
    if(x=='$')return a*a;

}

int main()
{
    printf("%d\n", calc('+',10,9));
    printf("%d\n", calc('$',10,343));
    return 0;
}
