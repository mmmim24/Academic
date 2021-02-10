#include <bits/stdc++.h>
using namespace std;
void solve(){
    string k;
    cin>>k;
    if(next_permutation(k.begin(),k.end()))
        cout<<k<<endl;
    else 
        cout<<"no answer\n";
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}