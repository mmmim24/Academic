#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",a+b+c-min(a,min(b,c))-max(a,max(b,c)));
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
