#include<stdio.h>
#include<math.h>
#define pi 2.0*acos(0.0)
double u(double a)
{
	double u;
	u=4.0*a*a-pi*a*a;
	return u;
}
int main()
{
	int T,i;
	scanf("%d",&T);

	for(i=1;i<=T;i++)
	{
		double a;
		scanf("%lf",&a);
		printf("Case %d: %.2lf\n",i,u(a));
	}

	return 0;
}
