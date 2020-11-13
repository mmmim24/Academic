#include <bits/stdc++.h>
using namespace std;
void S()
{
    int aa,a,sum=0;
    scanf("%d",&a);
    aa=a;
    while(a!=0)
    {
        sum+=a%10;
        a/=10;
    }
    if(aa%sum) puts("No");
    else puts("Yes");
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
