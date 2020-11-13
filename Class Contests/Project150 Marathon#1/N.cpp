#include<bits/stdc++.h>
using namespace std;
long long arr[21];
long long fact(long long n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}
void solve()
{
    for(long long i = 0;i<=20;i++)
        arr[i] = fact(i);
}
int main()
{
    solve();
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
