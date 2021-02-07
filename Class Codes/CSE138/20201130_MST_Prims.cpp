#include<iostream>
#include<vector>
#include<queue>
#define sz 1000
using namespace std;

vector<int>adj[sz], cost[sz];

priority_queue <  pair<int, pair<int,int> >,
vector< pair<int, pair<int,int> > >,
greater< pair<int, pair<int,int> > >
> pq;

int par[sz];
bool col[sz];

int find_par(int n)
{
    if(par[n]==n)
        return n;
    return par[n]=find_par(par[n]);
}

int mst_prims(int st)
{
    int p, q, w,total=0,u,v;
    for (int i = 0; i < adj[st].size(); i++)
    {
        p = min(st,adj[st][i]);
        q = max(st,adj[st][i]);
        pq.push({cost[st][i], {p,q} });
    }
    col[st]=1;
    vector< pair<int, pair<int,int> > > ans;

    while(!pq.empty())
    {
        w = pq.top().first;
        p = pq.top().second.first;
        q = pq.top().second.second;
        pq.pop();

        u = find_par(p);
        v = find_par(q);
        if(u != v)
        {
            par[u] = v;
            ans.push_back({ w, {p,q} });
            total+=w;
            if(col[p]&&col[q]) continue;
            st = col[p]?q:p;
            col[st] = 1;
            for (int i = 0; i < adj[st].size(); i++)
            {
                p = min(st,adj[st][i]);
                q = max(st,adj[st][i]);
                pq.push({cost[st][i], {p,q} });
            }
        }

    }

    cout << "Edge List in MST (Prims):\n";

    for (auto &x: ans )
    {
        w = x.first;
        p = x.second.first;
        q = x.second.second;
        cout << "(" << p << "," << q << ") -> " << w << endl;
    }

    return total;
}


void mst_init(int n)
{
    for (int i = 0; i<=n; i++)
        par[i]=i,col[i]=0;
}

int main()
{
    int n, m, x, y, z;

    cin >> n >> m;

    mst_init(n);

    for (int i = 0; i<m; i++)
    {
        cin >> x >> y >> z;
        adj[x].push_back(y);
        adj[y].push_back(x);
        cost[x].push_back(z);
        cost[y].push_back(z);
    }
    z = mst_prims(1);
    cout << "Total Weight = " << z  << endl;

    return 0;
}
/**
6 9
1 2 2
1 5 1
1 4 1
2 3 3
2 5 2
3 5 1
3 6 5
4 6 2
5 6 3
*/
