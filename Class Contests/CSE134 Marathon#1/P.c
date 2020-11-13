#include<stdio.h>
int high,low;
int main()
{
	int T,N,i,j,J[1000];
	float p;
	scanf("%d",&T);
	for (i=1;i<=T;i++)
	{
		scanf("%d",&N);
		for(j=0;j<N;j++)
		{
			scanf("%d",&J[j]);
		}
		for(j=1;j<N;j++)
		{
			if (J[j-1]>J[j])
			low++;
			else if (J[j-1]<J[j])
			high++;
		}
		printf("Case %d: %d %d\n",i,high,low);
		high=0;low=0;
	}
	return 0;
}
