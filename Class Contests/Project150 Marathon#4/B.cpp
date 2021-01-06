#include<bits/stdc++.h>
using namespace std;
int num[1000006];
void dvscnt(int n)
{
    int cnt=0;
    for(int i = 1;i*i<=n;i++)
    {
        if(i*i==n) cnt++;
        else if(n%i==0) cnt+=2;
    }
    printf("%d\n",cnt);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,g;
        scanf("%d %d",&x,&y);
        g = __gcd(x,y);
        dvscnt(g);
    }
    return 0;
}
