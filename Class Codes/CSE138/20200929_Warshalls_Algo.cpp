#include <iostream>
#define sz 1000
#define inf (1<<20)
using namespace std;

int adj[sz][sz], Next[sz][sz];

void printMatrix(int n)
{
    for (int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            cout << adj[i][j] << " \n"[j==n-1];
}

void warshall(int n)
{
    for(int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if(adj[i][j] > adj[i][k]+adj[k][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                    Next[i][j] = Next[i][k];
                }
}
void init(int n)
{
    for (int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            if(adj[i][j]==0)
            {
                adj[i][j] = inf;
                Next[i][j] = -1;
            }
            else
                Next[i][j] = j;
}
int main()
{
    int n, m, x, y, w;
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y >> w;
        adj[x][y] = w;
        adj[y][x] = w;
    }
    init(n);
    cout << "Before Running Warshall\'s Algo:\n";
    printMatrix(n);
    warshall(n);
    cout << "After Running Warshall\'s Algo:\n";
    printMatrix(n);

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        cout << "Path Cost = " << adj[x][y] << endl;
        cout << "Path from " << x << " to " << y <<":" << endl;
        cout << x;
        while(x != y)
        {
            x = Next[x][y];
            cout << " " << x ;
        }
        cout << endl;
    }
    return 0;
}
/**
6 8
5 2 6
1 3 2
4 0 1
3 4 8
0 2 9
5 0 1
0 1 5
0 3 2

4 4
0 1 5
2 0 2
1 2 2
3 1 1

*/


























