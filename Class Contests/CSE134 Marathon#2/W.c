#include<stdio.h>
#include<math.h>
#define sz 20000000
int prime[sz],count,sum,sieve[sz],twin[sz];
int prm(int n);
int main()
{
	int i,j,limit=sqrt(sz)+1;
	prime[count++]=2;
	for(i=3;i<=limit;i+=2)
		if(sieve[i]==0)
			for(j=i*i;j<=sz;j+=2*i)
				sieve[j]=1;
	for(i=3;i<=sz;i+=2)
		if(sieve[i]==0)
			prime[count++]=i;
	long long int k, n,x=1;
	for(i=1;i<=count;i++)
	{
		if(prm(prime[i]+2)==0)
		twin[x++]=prime[i];
	}
	while(~scanf("%d",&n))
		printf("(%d, %d)\n",twin[n],twin[n]+2);
	return 0;
}
int prm(int n)
{
	int i;
	for(i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
