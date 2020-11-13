#include<stdio.h>
int sum;
int main()
{
	int T,a,b,i,j;
	scanf("%d",&T);

	for(i=1;i<=T&&T<=100&&T>0;i++)
	{
		sum=0;
		scanf("%d%d",&a,&b);
		for(j=a;j<=b;j++)
		{
			if(j%2!=0)
			{
				sum+=j;
			}
		}
		printf("Case %d: %d\n",i,sum);
	}


	return 0;
}
