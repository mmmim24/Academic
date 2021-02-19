#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1;i <= T;i++)
    {
        int ans,n,q,l,r;
        scanf("%d %d",&n,&q);
        vector <int> arr(n+1);
        sort(arr.begin(),arr.end());
        for(int i = 0;i < n;i++)
            scanf("%d",&arr[i]);
        printf("Case %d:\n",i);
        for(int i = 1;i <= q;i++)
        {
            scanf("%d %d",&l,&r);
            int rr,ll;
            ll = lower_bound(arr.begin(),arr.end()-1,l)-arr.end();
            rr = upper_bound(arr.begin(),arr.end()-1,r)-arr.end();
            printf("%d\n",rr-ll);
        }
    }
    return 0;
}