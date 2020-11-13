#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    bool flag = 0;
    int len = str.size();
    for(int i = 1;i<len;i++)
    {
        if(str[i]==str[i-1])
        {
            flag = !flag;
            str.erase(i-1,2);
            len = str.size();
            if(i==1) i--;
            else i-=2;
        }
    }
    if(flag) puts("Yes");
    else puts("No");
    return 0;
}
