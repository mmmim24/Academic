#include <iostream>
#include <vector>
#include <algorithm>
#define inf (1<<29)
#define sz 1000
using namespace std;

vector<int> adj[sz], w[sz];

int par[sz], cost[sz];

int bellmanford(int st, int en, int n)
{
    cost[st] = 0;
    for (int k = 1; k<n; k++)
    {
        for (int i = 0; i<n; i++)
            for (int j = 0; j<adj[i].size(); j++)
                if(cost[i] + w[i][j] < cost[ adj[i][j] ])
                {
                    cost[ adj[i][j] ] = cost[i] + w[i][j];
                    par[ adj[i][j] ] = i;
                }
    }

    for (int i = 0; i<n; i++)
        for (int j = 0; j<adj[i].size(); j++)
            if(cost[i] + w[i][j] < cost[ adj[i][j] ])
            {
                cout << "Shortest Path could not be determined." << endl;
                cout << "Negative Cycle Detected!" << endl;
                return -inf;
            }
    return cost[en];
}
void init(int n)
{
    for (int i = 0; i<n; i++)
        par[i]=-1, cost[i]=inf;
}

int main()
{
    int x, y, z, n, m, st, en;
    cin >> n >> m;
    init(n);
    for (int i  = 0; i<m;i++ )
    {
        cin >> x >> y >> z;
        adj[x].push_back(y);
        w[x].push_back(z);
    }

    cin >> st >> en;

    x = bellmanford(st,en, n);
    if(x==-inf) return 0;
    cout << "The minimum path cost from " << st << " to " << en <<" is " << x << endl;

    x = en;
    vector<int>res;

    while(~x)
    {
        res.push_back(x);
        x = par[x];
    }
    reverse(res.begin(),res.end());
    cout<< "The path: ";
    for (int i = 0; i<res.size(); i++)
        cout << res[i] << ",\n"[i==res.size()-1];

    return 0;
}
/**
6 10
0 1 3
0 2 -2
0 4 8
2 3 6
1 2 1
1 5 4
1 4 6
4 5 -5
3 5 -5
3 1 9
0 5

6 10
0 1 3
0 2 -2
0 4 8
2 3 6
1 2 1
1 5 4
1 4 6
4 5 -5
3 5 -5
3 1 -9
0 5
*/
