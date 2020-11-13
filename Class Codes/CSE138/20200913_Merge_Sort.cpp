#include <iostream>
#include <vector>
using namespace std;

/// int arr[2][sz]

void merge(vector<int>&arr, int st, int en, int mid)
{
    vector<int>temp(arr.size()); /// en - st + 1
    int i, j; /// j = 0

    for (i = 0; i<arr.size(); i++) /// i = st; i <= en
        temp[i] = arr[i]; /// temp[j++]

    int n = mid - st + 1, m = en - mid, k = st;
    i = j = 0;

    while(i<n && j<m)
    {
        if( temp[ st + i] <= temp[mid + 1 + j] ) /// temp[ i ] = temp[ n + j ]
            arr[k++] = temp[st + i++];
        else
            arr[k++] = temp[mid + 1 + j++];
    }
    while(i<n)
        arr[k++] = temp[st + i++];
    while(j<m)
        arr[k++] = temp[mid + 1 + j++];
}

void mergesort(vector<int>&arr, int st, int en)
{
    if(st >= en) return ;
    int mid = ((st+en)>>1);
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,en);

    merge(arr,st,en,mid);
}

int main()
{
    int n;

    cin >> n;

    vector<int>v(n);

    for (int i = 0; i<n; i++)
        cin >> v[i];

    mergesort(v,0,n-1);

    cout << "Sorted Array using Merge Sort:\n";

    for (int i = 0; i<n; i++)
        cout << v[i] << " \n"[i==n-1];

    return 0;
}

/**
15
98 -87 -9 0 45 345 4 323 21 12 -312 88 -999 6 9
*/
