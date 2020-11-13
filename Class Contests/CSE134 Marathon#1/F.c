#include<stdio.h>
int sum(int n)
{
	int c;
	int sum=0;
	while(n!=0)
	{
		c=n%10;
		sum+=c;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0)
		{
    		printf("%d\n",sum(sum(sum(n))));
        }
	return 0;
}
