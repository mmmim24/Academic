#include<bits/stdc++.h>
using namespace std;
string b="BACK",f="FORWARD",v="VISIT",q="QUIT";
void solve(int i)
{
    int cnt=0,tmp;
    string a,w,curr="http://www.lightoj.com/";
    stack <string> fwd,bck;
    printf("Case %d:\n",i);
    while(1)
    {
        cin>>a;
        if(a==v)
        {
            bck.push(curr);
            cin>>curr;
            cout<<curr<<endl;
            while(!fwd.empty())
            fwd.pop();
        }
        else if(a==f)
        {
            if(fwd.empty())
                cout<<"Ignored\n";
            else
            {
                bck.push(curr);
                curr = fwd.top();
                fwd.pop();
                cout<<curr<<endl;
            }
        }
        else if(a==b)
        {
            if(bck.empty())
                cout<<"Ignored\n";
            else
            {
                fwd.push(curr);
                curr = bck.top();
                bck.pop();
                cout<<curr<<endl;
            }
        }
        else break;
    }
}
int main()
{
    //freopen("input.txt","r+",stdin);
    int T;
    cin>>T;
    for(int i = 1;i <= T;i++)
        solve(i);
    return 0;
}
