#include<stdio.h>
#define sz 100100
int arr[sz];

int comp(const void *a, const void *b)
{
    return ( *(int*)a - *(int *)b);
}


int b_search(int x, int n)
{
    int left=0, right = n-1, mid;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(arr[mid]==x) return 1;
        if(x<arr[mid]) right = mid-1;
        else left = mid+1;
    }
    return 0;
}

int main()
{
    int n, i, q, x;

    scanf("%d", &n);

    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);
    qsort(arr,n,sizeof(int),comp);
    for (i=0; i<n; i++)
        printf("%d%c",arr[i],",\n"[i==n-1]);

    scanf("%d", &q);

    for (i=0; i<q; i++)
    {
        scanf("%d", &x);
        if(b_search(x,n)) puts("yes");
        else puts("no");
    }

    return 0;
}
/**
13
4
6
-9
17
6
8
5
4
3
1
0
8
7
*/
