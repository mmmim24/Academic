#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,A=0,B=0,C=0,D=0;
    cin>>a>>b>>c>>d;
    if(a<0) A=1;
    if(b<0) B=1;
    if(c<0) C=1;
    if(d<0) D=1;
    if((A||B)&&(C||D))
    {
        cout<<max((min(a,b)*min(c,d)),(max(a,b)*max(c,d)))<<endl;
    }
    else
    {
        if((A&&B)||(C&&D))
        {
            if(A&&B)
                cout<<max(a,b)*min(c,d)<<endl;
            else if(C&&D)
                cout<<min(a,b)*max(c,d)<<endl;
        }
        else
        {
            cout<<max(a,b)*max(c,d)<<endl;
        }
    }
    return 0;
}
