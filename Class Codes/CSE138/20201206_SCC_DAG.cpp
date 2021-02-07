#include<iostream>
#include<vector>
#include<stack>
#define sz 1000
using namespace std;

vector<int> adj[sz], radj[sz], nadj[sz], components[sz];
bool col[sz], vis[sz];
int group_id[sz];
stack<int>stk;

void DFS(int u)
{
    col[u] = true;
    for (int i = 0; i<adj[u].size(); i++)
        if(!col[ adj[u][i] ])
            DFS(adj[u][i]);
    stk.push(u);
}

void DFS2(int u, int group)
{
    components[group].push_back(u);
    group_id[u] = group;
    vis[u] = true;
    for (int i = 0; i<radj[u].size(); i++)
        if(!vis[ radj[u][i] ])
            DFS2(radj[u][i], group);
}

int findSCC(int n)
{
    int mark=0, u;
    for (int i = 0; i<n; i++)
        if(!col[i])
            DFS(i);

    while(!stk.empty())
    {
        u = stk.top();
        stk.pop();
        if(!vis[u])
            DFS2(u,mark++);
    }
    return mark;
}

void findDAG(int n)
{
    for (int i = 0; i<n; i++)
        for (int j = 0; j<adj[i].size(); j++)
            if(group_id[i] != group_id[ adj[i][j] ])
                nadj[ group_id[i] ].push_back( group_id[ adj[i][j] ] );
}

int main()
{
    int n, m, x, y;
    cin >> n >> m;

    for (int i = 0; i<m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        radj[y].push_back(x);
    }

    m = findSCC(n);

    cout << "Total Components in SCC = " << m << endl;

    for (int i = 0; i<m; i++)
    {
        cout << i <<":";
        for (int j = 0; j<components[i].size(); j++)
            cout << " " << components[i][j];
        cout << endl;
    }

    findDAG(n);

    cout << "Total Node in DAG = " << m << endl;
    cout << "Adjacency List of the DAG:" << endl;

    for (int i = 0; i<m; i++)
    {
        cout << i <<":";
        for (int j = 0; j<nadj[i].size(); j++)
            cout << " " << nadj[i][j];
        cout << endl;
    }

    return 0;
}
/**
7 8
0 1
1 2
2 0
5 6
6 4
4 5
2 3
3 4

7 9
0 1
1 2
2 0
5 6
6 4
4 5
2 3
3 4
0 3
*/
