#include<bits/stdc++.h>
using namespace std;
void solve()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>0&&b>0&&c>0&&a<180&&b<180&&c<180)
    {
        if(a+b+c==180.0) puts("YES");
        else puts("NO");
    }
    else puts("NO");
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}
