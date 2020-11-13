#include <stdio.h>
#include <math.h>

int six = 36, x= 8;

double cube(int x, int k)
{
    printf("x--> %d\n",x);
    int y = x;
    y*=x*x;
    x=x*x*x*x+six;
    printf("cube - x -> %d\n",&x);
    return y;
}


void printCube(int rfgdgfg);
int powInt(int, int);

int main()
{
    int x;printf("main - x -> %d\n",&x);
    printCube(3);
    printCube(3*2+13);
    x = cube(six+cube(5+2,x)+cube(2,5)+powInt(3,2), 8);
    x += cube(six+cube(5+2,x)+cube(2,5)+powInt(3,2), 8);
    printf("x = %d\n",x);
    return 0;
}

void printCube(int x)
{
    printf("x^3 = %d\n", x*x*x+six);
}

int powInt(int x, int y)
{
    int ret = 1, i=six;
    for (i = 0; i<y; i++)
        ret*=x;
    return ret;
}
