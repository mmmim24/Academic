#include <bits/stdc++.h>
using namespace std;
void S(int i)
{
    int t,sum=0,f=0;
    scanf("%d",&t);
    while(t--)
    {
        char s[7];
        scanf("%s",s);
        if(s[0]=='d')
        {
            int a;
            scanf("%d",&a);
            sum+=a;
        }
        else
        {
            if(!f)
            {
                printf("Case %d:\n",i);
                f=1;
            }
            printf("%d\n",sum);
        }
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1;i<=T;i++)
    {
        S(i);
    }
    return 0;
}
