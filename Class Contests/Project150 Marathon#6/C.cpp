#include<bits/stdc++.h>
using namespace std;
int cntFive(int Q)
{
    int ans = 0;
    while(Q)
    {
        ans += Q/5;
        Q/=5;
    }
    return ans;
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1;i <= T;i++)
    {
        int Q;
        scanf("%d",&Q);
        int l = 0,r=1000000000,m,ans=0,c;
        while(l<=r)
        {
            m = l + (r-l)/2;
            c = cntFive(m);
            if(c==Q)
            {
                ans = m;
                break;
            }
            else if(c<Q)
                l = m+1;
            else if(c>Q)
                r = m-1;
        }
        printf("Case %d: ",i);
        if(ans)
            printf("%d\n",(ans/5)*5);
        else
            puts("impossible");
    }
    return 0;
}