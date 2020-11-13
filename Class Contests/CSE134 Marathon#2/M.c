#include<stdio.h>
int main()
{
	int i,j,T,n,a1,a2,b1,b2,c1,c2,vol;
	int x1=1,y1=1,z1=1,x2=1000,y2=1000,z2=1000;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%d%d%d",&a1,&b1,&c1);
			if(a1>x1) x1=a1;
			if(b1>y1) y1=b1;
			if(c1>z1) z1=c1;
			scanf("%d%d%d",&a2,&b2,&c2);
			if(a2<x2) x2=a2;
			if(b2<y2) y2=b2;
			if(c2<z2) z2=c2;
		}
		if (x2>x1&&y2>y1&&z2>z1)
		vol=(x2-x1)*(y2-y1)*(z2-z1);
		else vol=0;
		printf("Case %d: %d\n",i,vol);
		x1=1,y1=1,z1=1,x2=1000,y2=1000,z2=1000;
	}
	return 0;
}
