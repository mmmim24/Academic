#include<bits/stdc++.h>
using namespace std;
int diss[100005],disd[100005];
bool visited[100005],x;
vector <int> adj[100005];
void BFS(int s)
{
    queue <int> q;
    q.push(s);
    visited[s] = 1;
    while(!q.empty())
    {
        int u,v,len;
        u = q.front();
        len = adj[u].size();
        q.pop();
        for(int i = 0;i < len;i++)
        {
            v = adj[u][i];
            if(visited[v]==0)
            {
                q.push(v);
                visited[v] = 1;
                if(!x)
                {
                    diss[v] = diss[u] + 1;
                }
                else
                {
                    disd[v] = disd[u] + 1;
                }
            }

        }
    }
}
void solve(int i)
{
    int N,R;
    cin>>N>>R;
    for(int i = 1;i<=R;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int s,d;
    cin>>s>>d;
    x=0;
    BFS(s);
    x=1;
    memset(visited, 0, sizeof(visited));
    BFS(d);
    int mx = 0;
    for(int i = 0;i < N;i++)
    {
        mx = max(mx,diss[i]+disd[i]);
    }
    cout<<"Case "<<i<<": ";
    cout<<mx<<endl;
    memset(visited, 0, sizeof(visited));
    memset(diss, 0, sizeof(diss));
    memset(disd, 0, sizeof(disd));
    for(int i = 0;i<100005;i++)
        adj[i].clear();
}
int main()
{
    int t;
    cin>>t;
    for(int i = 1;i <= t;i++)
        solve(i);
    return 0;
}
