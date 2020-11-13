#include<stdio.h>
int main()
{
	int T,m,n,temp;
	scanf("%d",&T);
	int i;
	for(i=1;i<=T;i++)
	{
		scanf("%d%d",&m,&n);
		if(m==1||n==1||m*n==4)
		printf("Case %d: %d\n",i,m*n);
		else if(m*n%2!=0)
		printf("Case %d: %d\n",i,(m*n+1)/2);
		else if(m==2||n==2)
		{
			if(m==2) temp=n;
            else temp=m;
            if(temp%4==1||temp%4==3)
			printf("Case %d: %d\n",i,m*n/2+1);
            else if(temp%4==2)
            printf("Case %d: %d\n",i,m*n/2+2);
            else if(temp%4==0)
			printf("Case %d: %d\n",i,m*n/2);
		}
		else if(m*n%2==0)
		printf("Case %d: %d\n",i,m*n/2);
	}
	return 0;
}
