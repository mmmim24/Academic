#include<stdio.h>
#include<math.h>
int main()
{
	int i,T;
	double r,s,AB,ab;
	int Ox,Oy,Ax,Ay,Bx,By;
	scanf("%d",&T);
	for(i=1;i<=T&&T<=100;i++)
	{
		scanf("%d%d %d%d %d%d",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
		r=sqrt(pow((Ox-Ax),2)+pow((Oy-Ay),2));
		AB=sqrt(pow((Bx-Ax),2)+pow((By-Ay),2));
		ab=acos(1-pow(AB,2)/(pow(r,2)*2));
		s=ab*r;
		printf("Case %d: %.8lf\n",i,s);
	}
	return 0;
}
