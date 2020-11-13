#include<bits/stdc++.h>
using namespace std;
int level[2001];
bool root[2001];
void printBFS(bool **Adj,int vertices,int start,bool *visited)
{
    queue <int> BFS;
    BFS.push(start);
    visited[start] = true;
    level[start] = 1;
    while(!BFS.empty())
    {
        int curr = BFS.front();
        BFS.pop();
        //cout<<curr<<" ";
        for(int i = 1;i<=vertices;i++)
        {
            if(i==curr)
                continue;
            if(Adj[curr][i]&&!visited[i])
            {
                BFS.push(i);
                level[i]+=level[curr]+1;
                visited[i] = true;
            }
        }
    }
}
void BFS(bool **Adj,int vertices,int start,bool *visited)
{
    for(int i = 1;i<=vertices;i++)
    {
        if(!visited[i]&&root[i])
            printBFS(Adj,vertices,i,visited);
    }
}
int maxHeight()
{
    sort(level,level+2001);
    return level[2000];
}
int main()
{
    int edges,vertices,x,y;
    cin>>vertices;
    bool **Adj = new bool *[vertices+1], *visited = new bool [vertices+1];

    for(int i = 0;i<=vertices;i++)
    {
        Adj[i] = new bool [vertices+1];
        for(int j = 0;j<=vertices;j++)
        {
            Adj[i][j] = false;
        }
    }
    for(int i = 0;i <= vertices;i++)
        visited[i] = false;

    for(int i = 1;i<=vertices;i++)
    {
        cin>>x;
        if(x==-1) root[i]=1;
        else{
            Adj[x][i] = true;
            Adj[i][x] = true;
        }
    }
    BFS(Adj,vertices,1,visited);
    cout<<maxHeight()<<endl;
    return 0;
}
