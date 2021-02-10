#include<bits/stdc++.h>
using namespace std;
deque<int> dq;

void f()
{
    if(dq.empty())
        cout<<"No job for Ada?\n";
    else
    {
        cout<<dq.front()<<endl;
        dq.pop_front();
    }
}
void b()
{
    if(dq.empty())
        cout<<"No job for Ada?\n";
    else
    {
        cout<<dq.back()<<endl;
        dq.pop_back();
    }
}

int main()
{
    freopen("../../../../input.txt","r+",stdin);
    int q,x;
    string s;
    bool rev = 0;
    cin>>q;
    while(q--)   
    {
        cin>>s;
        if(s=="reverse")
            rev=!rev;
        else if(s=="back")
        {
            if(rev)
            {
                f();
            }
            else
                b();
        }
        else if(s=="front")
        {
            if(rev)
            {
                b();
            }
            else
                f();
        }
        else if(s=="toFront")
        {
            cin>>x;
            if(rev)
                dq.push_back(x);
            else
                dq.push_front(x);
        }
        else if(s=="push_back")
        {
            cin>>x;
            if(rev)
                dq.push_front(x);
            else
                dq.push_back(x);
        }
    }
    return 0;
}