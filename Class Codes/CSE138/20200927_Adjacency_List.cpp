#include<iostream>
#include<vector>
#define sz 1000
using namespace std;

vector<int> adj[sz], weight[sz];

void printList(int n)
{
    for (int i = 0; i<n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j<adj[i].size(); j++)
            cout << "(" << adj[i][j]  << ","<<
            weight[i][j] << ")" << " \n"[j==adj[i].size()-1];
    }
}


int main()
{
    int n, m, x, y, w;
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y >> w;
        adj[x].push_back(y);
        adj[y].push_back(x);
        weight[x].push_back(w);
        weight[y].push_back(w);
    }

    printList(n);
    return 0;
}
/**
6 8
5 2 6
1 3 20
4 0 1
3 4 8
0 2 9
5 0 1
0 1 5
0 3 2
*/
