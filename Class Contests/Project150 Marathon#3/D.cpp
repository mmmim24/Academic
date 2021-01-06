#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int l = s.size(),f=0;
        for(int i = 0;i<l;i++)
        {
            if(s[i]=='"'&&!f)
                cout<<"\`\`",f=1;
            else if(s[i]=='"'&&f)
                cout<<"\'\'",f=0;
            else
                cout<<s[i];
        }
    }
    return 0;
}
