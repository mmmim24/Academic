#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
void solve()
{
    int R;
    double a,ans = 0;
    cin>>R>>a;
    double x[R+1],y[R+1],d[R+1];
    for(int i = 1;i<=R;i++)
    {
        scanf("%lf %lf",x+i,y+i);
    }
    ans = d[1] = sqrt(pow((x[1]-x[R]),2)+pow((y[1]-y[R]),2));
    for(int i = 1;i<R;i++)
    {
        ans += d[i+1] = sqrt(pow((x[i]-x[i+1]),2)+pow((y[i]-y[i+1]),2));
    }
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout<<ans+pi*2*a;
}
int main()
{
    int T;
    solve();
    return 0;
}
