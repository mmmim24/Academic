#include <iostream>
#include <vector>
#define sz 1000
using namespace std;

vector<int> adj[sz];
int d[sz], low[sz], time;
bool arti_point[sz], visited[sz];

void find_articulation_point(int u, int par)
{
    low[u] = d[u] = ++time;
    visited[u] = true;
    int child = 0, v;
    for (int i = 0; i<adj[u].size(); i++)
    {
        v = adj[u][i];
        if(v == par)
            continue;
        if(visited[ v ])
            low[u] = min(low[u], d[v]);
        else
        {
            find_articulation_point(v,u);
            low[u] = min( low[u], low[v]);
            if(d[u] <= low[v] && par!=-1)
                arti_point[u] = true;
            child++;
        }

        if(child > 1 && par==-1)
            arti_point[u] = true;
    }
}


int main()
{
    int n, m, x, y, cnt;

    cin >> n >> m;

    for (int i = 0; i<m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    find_articulation_point(0,-1);

    cerr << "Node\td[i]\tlow[i]" << endl;
    for (int i = 0; i<n; i++)
        cerr << i << "\t" << d[i] << "\t" << low[i] << endl;
    cnt = 0;
    for (int i = 0; i<n; i++)
        if(arti_point[i]) cnt++;
    cout << "Articulation Point # " << cnt << endl;


    cout << "Articulation Point List:" << endl;
    for (int i = 0; i<n; i++)
        if(arti_point[i])
            cout << i << endl;

    return 0;
}
/**
7 7
0 1
0 2
2 3
3 4
3 5
5 6
6 2
*/
