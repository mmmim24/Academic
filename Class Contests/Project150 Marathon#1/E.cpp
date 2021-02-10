#include<bits/stdc++.h>
using ll = long long;
const int mod = 1000000007;
using namespace std;
ll bigmod(ll x,ll N)
{
    ll ret = 1;
    for(ll i = 1;i <= N;i++)
    {
        ret *= x;
        ret %= mod;
    }
    return ret;
}
int main()
{
    ll N;
    scanf("%lld",&N);
    ll ans = bigmod(10,N) + bigmod(8,N) - 2*bigmod(9,N);
    ans%=mod;
    ans = (ans+mod)%mod;
    printf("%lld",ans);
    return 0;
}