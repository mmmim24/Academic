#include<stdio.h>

int foo(int x,int y[])
{
    printf("foo-> &x = %d\n",&x);
    printf("foo-> &y[0] = %d, &y[1] = %d\n",&y[0],&y[1]);
    x+=10;
    y[0]--;
    y[1]++;
    return x*3+(y[0]-- * ++y[1]);
}

int main()
{
    int x = 10, y, z[2]={4,3};
    printf("main-> &x = %d\n",&x);
    printf("main-> &z[0] = %d, &z[1] = %d\n",&z[0],&z[1]);
    y = foo(x,z);
    printf("x = %d, y = %d\n", x, y);
    printf("z[0] = %d, z[1] = %d\n", z[0], z[1]);
    return 0;
}
