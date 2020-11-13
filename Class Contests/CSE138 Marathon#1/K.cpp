#include<bits/stdc++.h>
using namespace std;
int level[10004],n,x,y,u,v,ans,t1,t2;
bool visited[10004];
vector <int> edge[10004];
void BFS(int start)
{
    visited[start] = true;
    queue <int> q;
    q.push(start);
    while(!q.empty())
    {
        u = q.front();q.pop();
        //cout<<u<<endl;
        int len = edge[u].size();
        for(int i = 0;i < len;i++)
        {
            v = edge[u][i];
            if(!visited[v])
            {
                q.push(v);
                level[v] =  level[u] + 1;
                visited[v] =  true;
            }
        }
    }
}
void solve(int n)
{
    for(int i = 1;i <= n;i++)
    {
        if(!visited[i])
            BFS(i);
    }
}
int main()
{
    cin>>n;
    for(int i = 1;i < n;i++)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    solve(n);
    for(int i = 1;i < 10004;i++)
    {
        if(ans<level[i])
        {
            ans = level[i];
            t1 = i;
        }
    }
    for(int i = 1;i <10004;i++)
        level[i] = 0,visited[i]=0;

    BFS(t1);
    for(int i = 1;i < 10004;i++)
    {
        if(ans<level[i])
        {
            ans = level[i];
            t2 = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
/**
12
 1  2
 1  3
 2  4
 2  5
 5  6
 5  7
 3  8
 3  9
 3 10
10 11
11 12
*/
