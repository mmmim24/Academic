#include<bits/stdc++.h>
using namespace std;
void solve(int l)
{
    char ch[2];
    int x,y;
    int n,m,p;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(int j = 1;j<=m;j++)
    {
        scanf("%s",ch);
        if(ch[0]=='P')
        {
            scanf("%d%d",&x,&y);
            swap(arr[x],arr[y]);
        }
        else if(ch[0]=='S')
        {
            scanf("%d",&x);
            for(int i = 0;i<n;i++)
                arr[i] += x;
        }
        else if(ch[0]=='M')
        {
            scanf("%d",&x);
            for(int i = 0;i<n;i++)
                arr[i] *= x;
        }
        else if(ch[0]=='D')
        {
            scanf("%d",&x);
            for(int i = 0;i<n;i++)
                arr[i] /= x;
        }
        else if(ch[0]=='R')
        {
            for(int k = 0, i = n-1;k<n/2;k++,i--)
            {
                int temp = arr[k];
                arr[k]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("Case %d:\n",l);
    for(int i = 0;i<n;i++)
            printf("%d%c",arr[i]," \n"[i==n-1]);
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int l = 1;l<=T;l++)
    {
        solve(l);
    }
    return 0;
}
