#include<bits/stdc++.h>
using namespace std;
void solve(int T)
{
    int N,cnt=0,x;
    scanf("%d",&N);
    vector <int> arr;
    for(int i = 0;i < N;i++){
        scanf("%d",&x);
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    printf("Case %d: ",T);
    //for(int i = 1;i <= N;i++)
        //printf("%d ",*(arr+i));
    for(int i = 0;i < N;i++)
    {
        for(int j = i+1;j < N-1;j++)
        {
            int temp = upper_bound(arr.begin(),arr.end(),arr[i]+arr[j]-1)-arr.begin();
            cnt += temp - j - 1;
        }
    }
    printf("%d\n",cnt);
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1;i <= T;i++)
    {
        solve(i);
    }
    return 0;
}