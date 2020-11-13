#include<bits/stdc++.h>
#define sz 1000
using namespace std;
int rr[]={0,0,1,-1};
int cc[]={1,-1,0,0};
char graph[sz][sz];
bool vis[sz][sz];
int bfs(int W,int H,int x,int y)
{
    memset(vis, 0, sizeof(vis));
    int cnt=0;
    queue <pair<int, int> > q;
    q.push({x,y});
    vis[x][y] = 1;
    cnt++;
    int u,v;
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0;i < 4;i++)
        {
            u = x + rr[i];
            v = y + cc[i];
            if((u>0&&u<=H)&&(v>0&&v<=W)&&graph[u][v]=='.')
            {
                if(vis[u][v]==0)
                {
                    vis[u][v] = 1;
                    q.push({u,v});
                    cnt++;
                }
            }
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    for(int k = 1;k <= t;k++)
    {
        int W,H,x,y;
        cin>>W>>H;
        for(int i = 1;i <= H;i++)
        {
            for(int j = 1;j <= W;j++)
            {
                cin>>graph[i][j];
                if(graph[i][j]=='@')
                    x = i,y = j;
            }
        }
        //cout<<x<<" "<<y<<endl;
        cout<<"Case "<<k<<": ";
        cout<<bfs(W,H,x,y)<<"\n";
    }
    return 0;
}
