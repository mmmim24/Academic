#include<bits/stdc++.h>
using namespace std;
void solve(string i)
{
    if(i=="Hajj")
        cout<<"Hajj-e-Akbar\n";
    else
        cout<<"Hajj-e-Asghar\n";
}
int main()
{
    string s;
    for(int i = 1;;i++)
    {
        cin>>s;
        if(s=="*") break;
        cout<<"Case "<<i<<": ";
        solve(s);
    }
    return 0;
}
