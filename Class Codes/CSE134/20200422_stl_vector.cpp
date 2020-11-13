#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;

int main()
{
    int n, x;
    vector<int>a; /// int a[10];
    vector< vector<int> > v; ///int b[10][10];
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> x;
        a.pb(x);
    }


    for (int i = 0; i<a.size(); i++)
    {
//        a[i]+=rand();
        printf("%d%c", a[i], " \n"[i==a.size()-1]);
    }
    int k = 0;
    /// foreach loop
    for(int &xx: a)
    {
        xx+=5;
        cout << &xx <<":" << &a[k] << endl;
        k++;
    }

    for(auto xx: a)
    {
        cout << xx << endl;
    }

    /// iterator
    for (vector<int>::iterator it=a.begin(); it < a.end(); it++)
        cout << "> " << *it <<endl;

    sort(a.begin(),a.end());
    /// vector sorted in ascending order, printed in descending order
    for (auto it=a.rbegin(); it < a.rend(); it++)
        cout << "# " << *it <<endl;

    sort(a.rbegin(),a.rend());
    /// sorted in descending order
    for (auto it=a.begin(); it < a.end(); it++)
        cout << "@ " << *it <<endl;

    int p[10] = {6, 4, 9, -4, 7};
    sort(p,p+5);
    for (int i = 0; i<5; i++)
        printf("p[%d]> %d\n", i, p[i]);

    return 0;
}
/**
5
90
18
-1
70
6
*/
