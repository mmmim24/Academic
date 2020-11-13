#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	int i,j=0,k,count=0;
	for(k=1;k<=T;k++)
	{
		int P,L;
		scanf("%d%d",&P,&L);
		int num=P-L;
		if((num)<=L||(num)==0)
		{
			printf("Case %d: impossible\n",k);
		}
		else
		{
			int fact[10000];
			printf("Case %d:",k);
			for (i=1;i<=sqrt(num);i++)
			{
        		if(num%i==0)
				{
					fact[j++]=i;
					if(fact[j-1]>L)
					printf(" %d",fact[j-1]);
				}
			}
			for (i=j-1;i>=0;i--)
			{
				if(fact[i]*fact[i]==num) continue;
				else if(num/fact[i]>L)
				printf(" %d",num/fact[i]);
			}printf("\n");
			j=0;
		}
	}
	return 0;
}
