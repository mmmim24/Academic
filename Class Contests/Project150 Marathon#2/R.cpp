#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool c;
int main()
{
    int n;
    int c1 = 0,c2 = 0,mn = INT_MAX,nm = INT_MAX;
    cin>>n;
    int arr[n+1];
    for(int i = 1;i <= n;i++)
    {
        cin>>arr[i];
        mn = min(mn,arr[i]);
    }
    for(int i = 1;i <= n;i++)
    {
        if(arr[i]==mn&&!c) c1 = i,c=1;
        else if(arr[i]==mn&&c) c2 = i,c=0;
        if(c1&&c2&&c1!=c2)
            nm = min(nm,abs(c2-c1));
        if(!c)
        c1 = c2;
    }
    cout<<nm<<endl;
    return 0;
}
