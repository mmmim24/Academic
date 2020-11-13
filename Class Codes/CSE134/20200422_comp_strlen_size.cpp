#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    srand(2);
    int n, x;
    char ss[100001];

    for (int i = 0; i<100000; i++)
        ss[i]='A';
//    string s = ss;
//    for (int i = 0; i<s.size(); i++)
//        s[i]+=rand()%26;
    for (int i = 0; i<strlen(ss); i++)
        ss[i]+=rand()%26;
    return 0;
}
