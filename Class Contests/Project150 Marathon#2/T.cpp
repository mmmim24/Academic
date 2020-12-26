#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    int arr[n+1];
    for(int i = 1;i <= n;i++)
        cin>>arr[i];
    sort(arr+1,arr+n+1);
    for(int i = 1;i < n;i++)
    {
        for(int j = i+1;j <= n;j++)
        {
            if(arr[j]-arr[i]==k)
                ans++;
            else if(arr[j]-arr[i]>k)
                break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
