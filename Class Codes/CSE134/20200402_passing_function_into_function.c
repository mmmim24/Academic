#include<stdio.h>

int do_op(int (*)(int,int), int, int, int (*)(int,int));
int add(int,int);
int sub(int,int);

int main()
{
    int a = 20, b = 10, c;
    c = do_op(sub,a,b,add);
    printf("c after calling sub: %d\n",c);
    c = do_op(add,a,b,sub);
    printf("c after calling add: %d\n",c);
    return 0;
}

int do_op(int (*pf)(int, int l), int p, int q,int (*qf)(int, int l))
{
    int c = (*qf)(p,q);
    return c + (*pf)(p,c);
}
int add(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}
