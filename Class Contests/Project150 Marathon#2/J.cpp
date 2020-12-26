#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string name,ip,command;
    cin>>n>>m;
    map <string,string> mp;
    for(int i = 0;i < n;i++)
    {
        cin>>name>>ip;
        mp[ip] = name;
    }
    for(int j = 0;j < m;j++)
    {
        cin>>command>>ip;
        ip.erase(ip.end()-1);
        cout<<command<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
    return 0;
}
