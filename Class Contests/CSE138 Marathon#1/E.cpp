#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
void solve(ll n)
{
    ll arr[n+1];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
	stack<ll> res;
	int ii=0;
	ll x  = 0,area = 0,mx=0;
	while(ii<n)
    {
		if(res.empty() || arr[res.top()]<=arr[ii])
			res.push(ii++);
		else
		{
			x=res.top();
			res.pop();
			area=arr[x];
			if(res.empty())
                area*=ii;
            else
                area*=(ii-res.top()-1);
			mx=max(mx,area);
		}
	}
	while(!res.empty())
    {
		x=res.top();
		res.pop();
		area=arr[x];
		if(res.empty())
            area*=ii;
        else
            area*=(ii-res.top()-1);
		mx=max(mx,area);
	}
	cout<<mx<<endl;
}
int main()
{
	while(1)
    {
		cin>>n;
		if(!n)
			break;
		solve(n);
	}
      return 0;
}
