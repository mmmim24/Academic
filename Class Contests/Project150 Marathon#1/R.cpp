#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,f = 1;
    scanf("%d",&N);
    if(N%2) f=0;
    char s[N+1];
    scanf("%s",s);
    int l = strlen(s);
    int k = l/2;
    for(int i = 0;i<k;i++)
    {
        if(s[i]!=s[i+k])
        {
            f=0;
            break;
        }
    }
    if(f) puts("Yes");
    else puts("No");
    return 0;
}
