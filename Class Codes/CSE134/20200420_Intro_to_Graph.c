#include <stdio.h>
#define sz 10

int adj[sz][sz];

int main()
{
    int n, m, i, x, y, z, j;
    scanf("%d %d", &n, &m);

    for (i=0; i<m; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        x--;y--;
        adj[x][y] = z;
        adj[y][x] = z;
    }

    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            printf("%3d%c",adj[i][j]," \n"[j==n-1]);

    return 0;
}
/**
4 4
1 3 3
1 2 2
3 2 4
2 4 1
*/
