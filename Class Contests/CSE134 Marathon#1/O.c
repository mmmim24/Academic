#include<stdio.h>
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF&&(n&&m<=300)&&(n&&m>=1))
	{
		printf("%d\n",m*n-1);
	}
	return 0;
}
