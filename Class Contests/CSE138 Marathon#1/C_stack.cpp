#include <bits/stdc++.h>
using namespace std;
bool flag;
int main ()
{
    string s;
    cin>>s;
    stack <int> st;
    for(int i = 0;s[i];i++)
    {
        if(!st.empty()&&st.top()==s[i])
        {
            flag = !flag;
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if(flag) puts("Yes");
    else puts("No");
    return 0;
}
