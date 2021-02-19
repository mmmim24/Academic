#include<bits/stdc++.h>
using namespace std;
void solve(int i)
{
    double l,w,a,b,x,r,s,t;
    scanf("%lf : %lf",&a,&b);
    r = sqrt(a*a + b*b)/2.0;
    t = acos(1 - 0.5*((b*b)/(r*r)));
    s = r * t;
    x = 200.0/(a+s);
    l = a * x;
    w = b * x;
    printf("Case %d: %.6lf %.6lf\n",i,l,w);
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1;i <= T;i++)
    {
        solve(i);
    }
    return 0;
}