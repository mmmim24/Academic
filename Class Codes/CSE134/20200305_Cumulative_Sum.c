#include <stdio.h>
#define sz 1000

int arr[sz], cum[sz];

int main()
{
    int n, i, q, x, y;

    /// taking input
    scanf("%d", &n);
    for (i = 1;i<=n; i++)
        scanf("%d", &arr[i]);

    /// cumulative sum

    for (i = 1; i<=n; i++)
        cum[i]=cum[i-1]+arr[i];

    /// answer query
    scanf("%d", &q);
    for (i=0; i<q; i++)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n",cum[y+1]-cum[x]);
    }

    return 0;
}
/***
8
5 4 66 1 32 546 -52 1
5
5 7
1 7
2 2
1 7
0 7
*/
