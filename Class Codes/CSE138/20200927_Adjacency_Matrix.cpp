#include<iostream>
#define sz 1000
using namespace std;

int adj[sz][sz];

void printMatrix(int n)
{
    for (int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            cout << adj[i][j] << " \n"[j==n-1];
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

    printMatrix(n);
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
