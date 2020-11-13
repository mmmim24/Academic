#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cmath>
#define endl '\n'
using namespace std;
/**
Wow
wow
*/
int main()
{
    bool flag=true;
    char ss[10] = "2305";
    string s="WowgReaT", s1=" Good";
    s+=s1;
    s =ss;
    reverse(s.begin(),s.end());
    if(s<="wow")cout <<"yes>" << flag <<" s:" << s << endl;
    printf("s = %s, s = %d\n", s.c_str(), stoi(s));
    flag=false;
    flag=1;
    flag=0;
    cout << flag << endl;
    int x, y;
    cin >> x >> y; /// scanf("%d %d", &x, &y);
    scanf("%d", &x);
    x = pow(x,2);
    cout << "x+5 = " << x+5 << endl; /// printf("x+5 = %d\n", x+5);
    return 0;
}

/**
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("x+5 = %d\n", x+5);
    return 0;
}
*/
