#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str1;
    cin>>str1;
    int l = str1.size(),flag=0;
    int str2[l];
    for(int i = 0;i<l-1;i++)
    {
        str2[i] = abs(str1[i+1]-str1[i]);
    }
    for(int i = 0;i<l-1;i++)
    {
        if(str2[i]!=str2[l-i-2])
            {flag = 1; break;}
//        printf("%d ",str2[i]);
    }
    if(flag) cout<<"Not Funny\n";
    else cout<<"Funny\n";
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}
