#include<stdio.h>
int main()
{
	int i,T;
	scanf("%d",&T);
	for(i=1;i<=T&&T<10001;i++)
	{
		int n;
		char name[10];
		scanf("%d",&n);
		scanf("%s",name);
		if(n%3==0&&name[0]=='B')
			printf("Case %d: Alice\n",i);
		else if (n%3==1&&name[0]=='A')
			printf("Case %d: Bob\n",i);
		else if (n%3!=0&&name[0]=='B')
			printf("Case %d: Bob\n",i);
		else if (n%3!=1&&name[0]=='A')
			printf("Case %d: Alice\n",i);
	}

	return 0;
}
