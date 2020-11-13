#include<stdio.h>
int main()
{
	unsigned long long int m,n,c;

	while(~scanf("%llu %llu",&m,&n))
	{
		if(m>=n) c=m-n;
		else c=n-m;
		printf("%llu\n",c);
	}

	return 0;
}
