#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,cnt,ans=0;
    cin>>T;
    while(T--)
    {
        int N,n;
        cin>>N;
        n=N;
        ans=1,cnt=0;
        while(n%2==0)
        {
            cnt++;
            n/=2;
        }
        ans = max(ans,cnt);
        n=N;
        for(int i = 3;i*i <= n;i+=2)
        {
            cnt = 0;
            while(N%i==0)
            {
                cnt++;
                N/=i;
            }
            ans = max(ans,cnt);
            n=N;
        }
        cout<<ans<<endl;
    }
    return 0;
}
