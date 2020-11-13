#include <iostream>
#include <vector>
#include <cassert>
#include <queue>
#define sz 1000
using namespace std;

vector<int>adj[sz];
int indeg[sz];

vector<int> toposort(int n)
{
    queue<int>q;
    vector<int>res;
    for (int i = 0; i<n; i++)
        if(indeg[i]==0) q.push(i);
    if(q.empty()) return res;
    int x;
    while(!q.empty())
    {
        x = q.front();
        q.pop();
        res.push_back(x);
        for (int i = 0; i<adj[x].size(); i++)
            if( --indeg[ adj[x][i] ]==0 ) q.push(adj[x][i]);
    }
    return res;
}

void init(int n)
{
    for (int i = 0 ; i<n; i++)
        indeg[i] = 0;
}

int main()
{
    int n, m, x, y;
    cin >> n >> m;
    init(n);
    while(m--)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        indeg[y]++;
    }

    vector<int> sorted = toposort(n);
    assert(sorted.size() == n);
    for (int i = 0; i<n; i++)
        cout << sorted[i] << " \n"[i==n-1];
    return 0;
}
/**
8 14
7 6
0 2
0 4
4 1
0 3
3 6
1 2
1 3
4 6
2 3
5 6
5 2
5 4
7 5
*/
