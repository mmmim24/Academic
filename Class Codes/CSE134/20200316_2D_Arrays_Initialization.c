#include<stdio.h>

int main()
{
    int i,j, arr[][4] = {
                            {14, 18, 16, 55},
                            {-91, 5, 133, 56, 89},///
                            {},
                            {},
                            {5, 3}
                        };
    int ar2[][3] = {14, 18, 16, -91, 5, 133}, n, m;
    n = sizeof(arr)/sizeof(arr[0]);
    m = sizeof(arr[0])/sizeof(arr[0][0]);

    printf("arr - size: %d\n",n);
    printf("arr[0] - size: %d\n",m);
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
//            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
            printf("%3d%c", arr[i][j],  " \n"[j==m-1]);
    puts("");

    n = sizeof(ar2)/sizeof(ar2[0]);
    m = sizeof(ar2[0])/sizeof(ar2[0][0]);

    printf("ar2 - size: %d\n",n);
    printf("ar2[0] - size: %d\n",m);
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
//            printf("ar2[%d][%d] = %3d%c", i, j, ar2[i][j], " \n"[j==m-1]);
            printf("%3d%c",  ar2[i][j], " \n"[j==m-1]);
    puts("");

    return 0;
}
