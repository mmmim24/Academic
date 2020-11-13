#include <stdio.h>
#include <math.h>
#define sz 1000001
double array[sz],sum[sz],s;
int main()
{
	int i,j,T,n,b,result;

	for(i=1;i<=sz;i++)
		array[i-1]=log10(i);

	for(i=1;i<=sz;i++)
		{
			sum[i]=sum[i-1]+array[i-1];
		}

	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d%d",&n,&b);
		result=floor(sum[n]/array[b-1])+1;
		printf("Case %d: %d\n",i,result);
		s=0;
	}
	return 0;
}
