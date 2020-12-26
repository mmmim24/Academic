#include<bits/stdc++.h>
#define sz 1000000000
int num[sz/64], prm[sz/10],c;
#define mark(i) (num[i>>6] |= 1<<((i&63)/2))
#define check(i) (num[i>>6] & 1<<((i&63)/2))
using namespace std;
void bitwise_sieve()
{
    for(int i = 3;i*i <= sz;i+=2)
    {
        if(!check(i))
        {
            //prm[++c] = i;
            int k = i+i;
            for(int j = i*i;j <= sz;j += k)
            {
                mark(j);
            }
        }
    }
}
bool isPrime(int n)
{
    return n>1 && (n==2||((n&1) && !check(n)));
}
//void sieve()
//{
//    bitwise_sieve();
//    prm[++c] = 2;
//    for(int i = 3;i<sz;i+=2)
//    {
//        if(isPrime(i))
//            prm[++c] = i;
//    }
//}
int main()
{
    bitwise_sieve();
    int m,n,T;
    cin>>T;
    while(T--)
    {
        cin>>m>>n;
        for(int i = m;i <= n;i++)
        {
            if(isPrime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
