#include<stdio.h>
int k = 0;
void foo()
{
    int i=0;
    static int x = 10;
    /// x = 10;
    for (; i<3; i++, x+=10)
        printf("i = %d, x = %d, &i = %d, &x = %d\n",i,x,&i,&x);
    if(k++<=0) foo();
}

int main()
{
    foo();
    foo();
    return 0;
}
