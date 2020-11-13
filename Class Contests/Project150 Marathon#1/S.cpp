#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    scanf("%d", &n);
    int i = sqrt(n);
    for(;i>0;i--)
    {
        if(n%i==0)
        {
            printf("%d %d\n",i,n/i);
            break;
        }
    }
    return 0;
}
