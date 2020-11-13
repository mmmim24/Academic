#include<stdio.h>
int cnt(int x)
{
	int cnt=x/3*2;
	if (x==0)
	return 0;
	if (x%3==2)
	{
		cnt+=1;
	}
	return cnt;
}
int main()
{
	int T,n,m,j;
	scanf("%d",&T);
	for(j=1;j<=T;j++)
	{
		scanf("%d%d",&m,&n);
		printf("Case %d: %d\n",j,cnt(n)-cnt(m-1));
	}
	return 0;
}
