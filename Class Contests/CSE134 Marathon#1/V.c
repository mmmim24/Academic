#include<stdio.h>
int main()
{
	int n,i;
	int s,d,a,b;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d %d",&s,&d);
		if(s>=d && (s+d)%2==0)
		    {
              a=(s+d)/2;
              b=(s-d)/2;
                printf("%d %d\n",a,b);
            }
        else
                printf("impossible\n");
	}


	return 0;
}
