#include <stdio.h>

int fact(int n)
{
    int ret;
    printf("n = %d\n", n);
    if(n==0) return 1; /// 0! = 1
    ret = n * fact(n-1);
    printf("ret = %d\n", ret);
    return ret;/// n! = n * (n-1)!
}
/**
n       0  1  2  3   4    5    6
fact(n) 1  1  2  6  24  120  720

f(3) = 3 * f(3-1) = 3 * f(2) = 3 * 2 = 6
f(2) = 2 * f(2-1) = 2 * f(1) = 2 * 1 = 2
f(1) = 1 * f(1-1) = 1 * f(0) = 1 * 1 = 1
f(0) = 1

f(0) = 0 * f(0-1) = 0 * f(-1)
f(-1) = -1 * f(-1-1) -1 * f(-2)
...
...
...
*/
int main()
{
    int n;

    while(~scanf("%d", &n))
        printf("factorial(%d) = %d\n",n,fact(n));
    return 0;
}
/**
Recursion:
1. Call itself
2. Base case
3. Towards Base case


*/
