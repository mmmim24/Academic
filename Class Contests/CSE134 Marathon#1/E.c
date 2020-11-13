#include<stdio.h>
#include<math.h>
int main()
{
    int n,b,i,j=1;
    while(scanf("%d",&n)==1 && (n>=0))
    {
        if(n==1)
            printf("Case %d: 0\n",j);
            for(i=0;i<10001;i++)
                if(pow(2,i)<n&&pow(2,i+1)>=n)
                    printf("Case %d: %d\n",j,i+1);
                    j++;
    }
    return 0;
}
