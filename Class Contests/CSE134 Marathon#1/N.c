#include<stdio.h>
#include<math.h>
int sum;
int main()

{
	int n,i;
	while(scanf("%d",&n)&&n!=0)
	{
		for (i=1;(i<=n)&&(n>=0)&&(n<=100);i++)
		{
			sum=sum+pow(i,2);
		}
		printf("%d\n",sum);
		sum=0;
	}

	return 0;
}
