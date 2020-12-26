#include<bits/stdc++.h>
using namespace std;
int c;
void boy()
{
    cout<<"IGNORE HIM!\n";
}
void girl()
{
    cout<<"CHAT WITH HER!\n";
}
int main()
{
    string s;
    cin>>s;
    int l = s.size();
    for(char i = 'a';i<='z';i++)
    {
        for(int j = 0;j<l;j++)
        if(s[j]==i)
        {
            c++;
            break;
        }
    }
    if(c&1)
        boy();
    else girl();
    return 0;
}
