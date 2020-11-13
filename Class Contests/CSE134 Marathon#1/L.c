#include<stdio.h>
int ans;
int main()
{
 	int n,a;
    while(scanf("%d",&n)&&n>0)
	{
        while(n>1)
		{
            if(n==2)
			{
				ans++;
				break;
			}
            a=n/3;
            ans=ans+a;
            n=n-(n/3)*3;
            n=n+a;
        }
	    printf("%d\n",ans);
        ans=0;
    }
	return 0;
}
