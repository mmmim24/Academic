#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k;
    scanf("%d",&k);
    puts("INTERSECTING LINES OUTPUT");
    while(k--)
    {
    	double x[5],y[5];
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
        	  &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]);

        double a1, b1, c1;
        double a2, b2, c2;
        double D, Dx, Dy;

    	a1 = y[1]-y[2];
    	a2 = y[3]-y[4];
    	b1 = x[2]-x[1];
    	b2 = x[4]-x[3];
    	c1 = -x[1]*y[2] + y[1]*x[2];
    	c2 = -x[3]*y[4] + y[3]*x[4];

    	D = a1*b2-a2*b1;
    	Dx = b2*c1-c2*b1;
    	Dy = a1*c2-c1*a2;


    	if(D!=0){
    		double qx = (b2*c1-c2*b1)/(a1*b2-a2*b1);
			double qy = (a1*c2-c1*a2)/(a1*b2-a2*b1);

			printf("POINT %.2lf %.2lf\n", qx,qy);
    	}
		else{
			if( (a1*x[3]+b1*y[3]-c1)==0)
				puts("LINE");
			else
				puts("NONE");

        }
    }
    puts("END OF OUTPUT");
    return 0;
}
