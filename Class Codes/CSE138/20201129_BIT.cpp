#include<iostream>
#define sz 10000
using namespace std;

int BIT[sz], n;

void update(int x, int delta)
{
    for (; x <= n ; x += x&-x )
        BIT[x] += delta;
}

int query(int x)
{
    int sum = 0;
    for (; x > 0 ; x -= x&-x )
        sum += BIT[x];
    return sum;
}

int main()
{
    int q, x, y, k;

    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        cin >> x;
        update(i,x);
    }

    cin >> q;
    for (int i = 0; i<q; i++)
    {
        cin >> k >> x >> y;
        if(k==1)
            cout << query(y+1) - query(x) << endl;
        else
            update(x+1,y - query(x+1) + query(x) );
    }
    return 0;
}
/**
5
7 3 10 2 1
7
1 0 4
2 2 4
1 0 4
1 1 4
1 0 3
2 0 17
1 0 0
*/
