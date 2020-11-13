#include <stdio.h>
#include <math.h>
#define pi (2*acos(0.0))
int main()
{
    int T;
    scanf("%d",&T);
    int i;
    for(i=1;i<=T;i++)
    {
        double r1,r2,p,h,r;
		scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
		r=r2+((r1-r2)*p)/h;
		double fl=(pi*p*(r2*r2+r2*r+r*r))/3.0;
		printf("Case %d: %.9lf\n",i,fl);
    }
    return 0;

}
