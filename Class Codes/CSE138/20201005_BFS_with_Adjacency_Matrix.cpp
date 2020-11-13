#include <iostream>
#include <algorithm>
#include <queue>
#define sz 1000
using namespace std;
int rr[]={0,0,1,-1}; /// to - right, left, down, up
int cc[]={1,-1,0,0}; /// from - left, right, up, down


int graph[sz][sz], adj[sz][sz], path[sz][sz];

pair<int,int> bfs(int x, int y, int n, int m)
{
    queue< pair<int,int> > q;
    q.push({x,y});
    adj[x][y] = 1;
    int u, v;
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i<4; i++)
        {
            u = x + rr[i];
            v = y + cc[i];
            if(u<0||u>=n||v<0||v>=m||adj[u][v]) continue;
            adj[u][v] = adj[x][y] + 1;
            path[u][v] = i;
            q.push({u,v});
            if(graph[u][v]==1) return {u,v};
        }
    }
    return {-1,-1};
}

int main()
{
    int n, m, x, y, k, u, v;
    cin >> n >> m;
    cin >> x >> y;
    graph[x][y] = 2;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
    }

    pair<int,int> dest = bfs(x,y,n,m), cur;
    if(dest.first==-1){
        cout << "Alas! Robot has no way to exit." << endl;
        return 0;
    }

    cur = dest;
    vector<char>res;
    while(adj[cur.first][cur.second]!=1)
    {
        if(path[cur.first][cur.second]==0)
        {
            res.push_back('R');
            cur.second--;
        }
        else if(path[cur.first][cur.second]==1)
        {
            res.push_back('L');
            cur.second++;
        }
        else if(path[cur.first][cur.second]==2)
        {
            res.push_back('D');
            cur.first--;
        }
        else if(path[cur.first][cur.second]==3)
        {
            res.push_back('U');
            cur.first++;
        }
    }
    reverse(res.begin(),res.end());

    cout << res.size() << " move is needed to go from (" << x <<"," << y<<") to ("  <<
            dest.first << "," << dest.second << ")" << endl;
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << ",\n"[i==res.size()-1];
    return 0;
}

/**
4 6
1 1
1
2 4

*/
