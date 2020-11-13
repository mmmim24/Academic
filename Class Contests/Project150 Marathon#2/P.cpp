#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    vector <int> v;
    while(scanf("%d",&n)!=EOF)
    {
        c++;
        v.push_back(n);
        sort(v.begin(),v.end());
        if(c==1)
            printf("%d\n",n);
        else if(c&1)
            printf("%d\n",v[c/2]);
        else
            printf("%d\n",(v[c/2]+v[c/2-1])/2);
    }
    return 0;
}
