#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define sz 200006
typedef long long ll;
using namespace std;
ll par[sz],dist[sz];
ll n,m,x,y,w,u,v,c,len;
vector <ll> adjL[sz],cost[sz];
ll djikstra(ll s,ll d)
{
    priority_queue <pair<ll,ll>, vector< pair<ll,ll> >, greater< pair<ll,ll > > > pq;
    pq.push({0,s});
    while(!pq.empty())
    {
        c = pq.top().first;
        u = pq.top().second;
        len = adjL[u].size();
        pq.pop();
        for(ll i = 0;i < len;i++)
        {
            v = adjL[u][i];
            if(c + cost[u][i] < dist[v]||!dist[v]&&v!=s)
            {
                dist[v] = c + cost[u][i];
                pq.push({dist[v], v});
                par[v] = u;
            }
        }
    }
    return dist[d];
}
int main()
{
    cin>>n>>m;
    for(ll i = 1;i <= m;i++)
    {
        cin>>x>>y>>w;
        adjL[x].push_back(y);
        adjL[y].push_back(x);
        cost[x].push_back(w);
        cost[y].push_back(w);
    }
    ll ans = djikstra(1,n);
    vector <ll> res;
    x = n;
    if(!dist[x])
    {
        cout<<-1<<endl;
        return 0;
    }
    while(x)
    {
        res.push_back(x);
        //cout<<x<<" ";
        x = par[x];
    }
    for(ll it = res.size()-1;it>=0;it--)
        cout<<res[it]<<" \n"[it==0];
    return 0;
}
/**
5 6
1 2 4
2 4 3
2 5 2
4 3 7
3 1 8
5 1 7

5 6
1 2 2
1 4 1
4 3 3
3 2 4
2 5 5
5 3 1

7 10
1 3 1
1 4 6
2 6 1
4 2 2
2 7 5
3 6 8
3 4 2
5 4 9
5 6 2
7 5 1
*/
