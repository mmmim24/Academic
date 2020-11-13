#include<iostream>
#include<map>
#include<iterator>
#define sz 1000
using namespace std;

map< pair<int,int> , int>adj;


int main()
{
    int n, m, x, y, w;
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y >> w;
        if(!adj.count({x,y}))
            adj[{x,y}]= w;
        else
            adj[{x,y}]= min(adj[{x,y}], w);
    }

    auto it = adj.begin(), mx = adj.begin();
    while(it!=adj.end())
    {
        if(mx->second < it->second)
            mx = it;
        it++;
    }

    cout << "(" << mx->first.first << "," << mx->first.second << ") -> "<< mx->second << endl;

    return 0;
}
/**
6 11
5 2 6
1 3 20
4 0 1
3 4 8
0 2 9
5 0 1
0 1 5
0 3 2
2 0 15
0 2 5
3 1 2
*/
