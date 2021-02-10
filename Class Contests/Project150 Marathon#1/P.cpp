#include<bits/stdc++.h>
const int mod = 1000000007;
using namespace std;
int a[2001];
int main()
{
    a[0] = 1;
    int n;
    cin>>n;
    for(int i = 3;i <= n;i++)
    {
        a[i] = (a[i-1]+a[i-3]) % mod;
    }
    cout<<a[n]<<endl;
    return 0;
}