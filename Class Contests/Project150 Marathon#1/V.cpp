#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,cnt=0;
    scanf("%d %d",&A,&B);
    for(int i = A;i<=B;i++)
    {
        //23472%10==last digit
        //23472/10000==first digit
        //(23472/1000)%10==second digit
        //(23472/10)%10==second last digit
        int f,l,s,sl;
        l = i%10,f = i/10000,s=(i/1000)%10,sl=(i/10)%10;
        if(l==f&&s==sl) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
