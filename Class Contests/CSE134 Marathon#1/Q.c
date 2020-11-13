#include<stdio.h>
int main()
{
	int n,k,count=0;
	while(scanf("%d %d",&n,&k)!=EOF&&k>1)
	{
		count=n;
		while(count>=k)
		{
			count=count+(n/k);
			n=(n/k)+(n%k);
			if (n<k)
			break;
		}
		printf("%d\n",count);
	}
	return 0;
}
