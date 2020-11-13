#include<bits/stdc++.h>
using namespace std;
int f(int x)
{
    return (pow((sqrt(x-3)-pow((3*x+2)/2,(1.0/3))),7)-pow((x-sqrt((x*x-1984)/5)),3));
}
int main()
{
    for(int i = 44;;i++)
        if(f(i)==0)
           {
                printf("%d\n",i);
                break;
            }
    return 0;
}
