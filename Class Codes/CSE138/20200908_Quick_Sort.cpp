#include<iostream>
#define sz 1000
using namespace std;

int partition(int arr[], int left, int right)
{
    bool r = true;
    while(left<right)
    {
        if(arr[left] > arr[right])
        {
            swap(arr[left], arr[right]);
            r ^= 1;
        }
        if(r) right--;
        else left++;
    }
    return left;
}

void quicksort(int arr[], int left, int right)
{
    if(left >= right) return;

    int p = partition(arr,left,right);
    quicksort(arr,left,p-1);
    quicksort(arr,p+1,right);
}

int main()
{
    int n, arr[sz];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr,0,n-1);

    cout << "Sorted Array using Quick Sort:\n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i==n-1];

    return 0;
}
/**
12
44 33 11 55 77 90 40 60 99 22 88 66
*/
