#include <bits/stdc++.h>
using namespace std;
void S()
{
    int x,y,X=0,Y=0;
    scanf("%d%d",&x,&y);
    char s[101];
    scanf("%s",s);
    int l = strlen(s);
    for(int i = 0;i<l;i++)
    {
        if(s[i]=='U') Y++;
        if(s[i]=='D') Y--;
        if(s[i]=='L') X--;
        if(s[i]=='R') X++;
    }
    printf("%d %d\n",x+X,y+Y);
}
int main()
{
    int T;
//    scanf("%d",&T);
//    while(T--)
    {
        S();
    }
    return 0;
}
