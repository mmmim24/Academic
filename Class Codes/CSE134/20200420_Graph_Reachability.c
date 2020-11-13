#include <stdio.h>
#define sz 10

int adj[sz][sz];

int main()
{
    int n, m, i, x, y, z, j, q, k;
    scanf("%d %d", &n, &m);

    for (i=0; i<m; i++)
    {
        scanf("%d %d", &x, &y);
        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            for (k=0; k<n; k++)
//                if(adj[j][i]&adj[i][k]) adj[j][k]=1;
                adj[j][k]|=(adj[j][i]&adj[i][k]);
        }
    }


//    for (i=0; i<n; i++)
//        for (j=0; j<n; j++)
//            printf("%3d%c",adj[i][j]," \n"[j==n-1]);
    scanf("%d", &q);
    for (i=0; i<q; i++)
    {
        scanf("%d", &x);
        printf("Reachable from %d: ", x);
        for (j=0; j<n; j++)
            if(adj[x][j]&&x!=j) printf("%d ",j);
        puts("");
    }
    return 0;

}
/**
10 7
0 1
1 2
8 2
5 3
4 9
5 8
9 7
10
8
9
0
1
2
3
7
6
4
5
*/
