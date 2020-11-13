#include<stdio.h>

int main()
{
    int i, arr[] = {14, 18, 16, -91, 5, 133};
    int ar2[10] = {14, 18, 16, -91, 5, 133}, n, m;
    n = sizeof(arr)/sizeof(arr[0]);
    m = sizeof(ar2)/sizeof(ar2[0]);

    printf("arr - size: %d\n",n);
    for (i=0; i<n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    puts("");

    ar2[2] = 3+9-arr[3];
    printf("ar2 - size: %d\n",m);
    for (i=0; i<m; i++)
        printf("ar2[%d] = %d\n", i, ar2[i]);

    return 0;
}
