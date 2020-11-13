#include<stdio.h>
#include<math.h>
#define pi 3.141592654
int main()
{
    double R,r,A;
    int i,n,T;
	scanf("%d",&T);

	for(i=1;i<=T&&T<126&&T>0;i++)
	{
		scanf("%lf %d",&R,&n);

    A=sin(pi/n);
	r=R*A/(1+A);

    printf("Case %d: %.10lf\n",i,r);
	}
        return 0;
}
