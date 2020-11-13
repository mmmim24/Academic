#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char s[1000006];
    scanf("%s",s);
    int i,l = strlen(s);
    for(i = l-1;i>=0;i--)
    {
        if(s[i]!='0') break;
    }
    for(;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    puts("");
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}
