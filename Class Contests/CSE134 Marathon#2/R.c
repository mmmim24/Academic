#include<stdio.h>
int main()
{
	int T,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		unsigned long long int d;
		scanf("%llu",&d);
		if (d%9!=0)
		printf("Case %d: %llu\n",i,10*d/9);
		else
		printf("Case %d: %llu %llu\n",i,10*d/9-1,10*d/9);
	}
	return 0;
}
