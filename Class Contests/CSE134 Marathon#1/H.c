#include<stdio.h>
int sum,count;
int main()
{
	int C,N,i,j,g[1000],av,aa;
	float p;
	scanf("%d",&C);
	for (i=1;i<=C;i++)
	{
		scanf("%d",&N);
		for(j=0;j<N;j++)
		{
			scanf("%d",&g[j]);
			sum+=g[j];
		}
		av=sum/j;
		for(j=0;j<N;j++)
		{
			if(g[j]>av)
			count++;
		}
		p=(100.0*count)/j;
		printf("%.3f%c\n",p,'%');
		sum=0;
		av=0;
		count=0;
	}
	return;
}
