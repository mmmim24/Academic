#include<bits/stdc++.h>
using namespace std;
int a,b,c,n,m;
char str[101],ans[3];
int main()
{
    scanf("%d%d",&n,&m);
    int arr[n+1];
    for(int i = 1;i <= n;i++)
    {
        scanf("%d",arr+i);
    }
    for(int i = 1;i <= n-1;i++)
    {
        for(int j = i+1;j <= n;j++)
        {
            if(arr[i]-arr[j]==m||arr[j]-arr[i]==m)
                c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
