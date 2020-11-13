#include <iostream>
#include <vector>
#define sz 1000
using namespace std;

vector<int>adj[sz], adjok[sz];

bool col[sz], colok[sz];

bool res[sz];

bool check(int n)
{
    for (int i = 0; i<n; i++)
        if(col[i]!=colok[i]) return false;
    return true;
}

void dfs1(int x)
{
    if(col[x]) return;
    col[x] = true;
    for (int i = 0; i<adj[x].size(); i++)
        dfs1(adj[x][i]);
}

void dfs2(int x)
{
    if(colok[x]) return;
    colok[x] = true;
    for (int i = 0; i<adjok[x].size(); i++)
        dfs2(adjok[x][i]);
}

void reset(int n)
{
    for (int i  = 0; i<n; i++)
        col[i] = colok[i] = 0;
}

int main()
{
    int n, m, x, y, z, thres;
    cin >> n >> m >> thres;
    for (int i =0 ; i<m; i++ )
    {
        cin >> x >> y >> z;
        x--,y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
        if(z > thres)
        {
            adjok[x].push_back(y);
            adjok[y].push_back(x);
        }
    }

    for (int i = 0; i<n; i++)
    {
        reset(n);
        dfs1(i);
        dfs2(i);
        if(!check(n)) res[i] = true;
    }

    for (int i = 0; i<n; i++)
        if(res[i]) cout << i+1 <<" ";
    cout << endl;

    return 0;
}
/**
10 10 5
1 2 5
5 2 3
3 2 4
4 3 2
4 5 6
6 7 1
6 8 2
8 9 6
6 9 8
7 9 9
*/
