#include<stdio.h>
int abs(int a)
{
	int abs;
	if(a>=0)
	abs=a;
	else if(a<0)
	abs=-a;
	return abs;
}

int main()
{
	int Ax,Bx,Cx,Dx,Ay,By,Cy,Dy;
	int T,i,temp,area;
	scanf("%d",&T);
	for (i=1;(i<=T)&&(T<=1000);i++)
	{
		scanf("%d %d %d %d %d %d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
		Dx=Ax+Cx-Bx;
		Dy=Ay+Cy-By;

		temp=abs(((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax)));
		area=temp/2;

		printf("Case %d: %d %d %d\n",i,Dx,Dy,area);
	}

	return 0;
}
