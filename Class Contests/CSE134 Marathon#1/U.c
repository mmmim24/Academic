#include<stdio.h>
int main()
{
	int n,index,bin[32],sum,size[1000];
	while(scanf("%d",&n)&&n>0)
	{
		index=0;
		sum=0;
		while(n>0)
		{
			bin[index++]=n%2;
			n/=2;
		}
		int i;
		printf("The parity of ");
		for(i=index-1;i>=0;i--)
		{
			printf("%d",bin[i]);
			sum+=bin[i];
		}
			printf(" is %d (mod 2).\n",sum);

	}
}
