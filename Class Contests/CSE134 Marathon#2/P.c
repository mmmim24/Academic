#include<stdio.h>
#include<math.h>
int count,num[100],prime[100];
int main()
{
	int i,limit,j;
	for(i=3;i<10;i+=2)
	{
		if(num[i]==0)
		{
			for(j=i*i;j<100;j+=2*i)
			{
				num[j]=1;
			}
		}
	}
	prime[count++]=2;
	for(i=3;i<100;i+=2)
	{
		if(num[i]==0)
		{
			prime[count++]=i;
		}
	}
	int T,n,x;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&n);
		printf("Case %d: %d = ",i,n);
		for(j=0;j<count&&prime[j]<=n;j++)
		{
			int cnt=0;
			x=prime[j];
			while(n/x)
			{
				cnt+=n/x;
				x*=prime[j];
			}
			printf("%d (%d)",prime[j],cnt);
			if(prime[j+1]>n||prime[j]==n||prime[j]==97)
                break;
            else
            printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
