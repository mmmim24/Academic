#include<stdio.h>
int main()
{
	long int N;
	while(~scanf("%ld",&N)&&N>=0)
	{
		printf("%ld\n",(1+N*(N+1)/2));
	}
	return 0;
}
