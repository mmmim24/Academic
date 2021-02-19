#include<bits/stdc++.h>
#define PI acos(-1)
#define eps 0.00000001
using namespace std;
double x, y, c;
double solve(double d)
{
    double A = sqrt((x*x) - (d*d));
    double B = sqrt((y*y) - (d*d));
    return ((A*B)/(A+B));
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 1;i <= T;i++)
    {
        scanf("%lf %lf %lf", &x, &y, &c);
        double lo = 0.0, hi = min(x, y), mid;
        double ans = 1;
        while(hi-lo>=eps)
        {
            mid = (lo + hi)/2.0;
            if(solve(mid)<=c)
            {
                hi = mid;
            }
            else
            {
                lo = mid;
            }
        }
        printf("Case %d: %0.7lf\n",i,lo);
    }
    return 0;
}