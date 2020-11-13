#include<stdio.h>
int main()
{
	int n,t[500],r[500];
	int index,temp;
	while(scanf("%d",&n)&&n>=0)
	{
		if(n==0)
		printf("0");
		while(n>0)
		{

			t[index++]=n%3;
			n/=3;
		}
		int i;
		for(i=index-1;i>=0;i--)
			{
				printf("%d",t[i]);
			}
				printf("\n");
		index=0;
	}
	return 0;
}
