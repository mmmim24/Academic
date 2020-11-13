#include<stdio.h>
int main()
{
    int t,a,b,i;
    scanf("%d",&t);

    for(i=1;(t<15)&&(i<=t);i++)
    {
        scanf("%d %d",&a,&b);
        if (a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}
