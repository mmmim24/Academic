#include<stdio.h>
int main()
{
    int i,T,C,d;
    float c;

    scanf("%d",&T);
    for(i=1;(i<=T)&&(T<=100);i++)
    {
        scanf("%d %d",&C,&d);
        c=C+(d*5)/9.;
        printf("Case %d: %.2f\n",i,c);
    }

    return 0;
}
