#include <iostream>
#define sz 1000
using namespace std;

struct Heap{
    int heap[sz], cnt;
    Heap();
    void insert_in_heap(int);
    int delete_heap_root();
    void print_heap();
};

Heap::Heap(){
    cnt = 0;
}

void Heap::insert_in_heap(int x){
    heap[++cnt] = x;
    int child = cnt;
    int par = child/2;

    while(par>0)
    {
        if(heap[par] < heap[child])
            swap(heap[par], heap[child]);
        else
            return;
        child = par;
        par = par/2;
    }
}

int Heap::delete_heap_root()
{
    if(cnt==0)
    {
        cout << "Underflow!" << endl;
        return -1;
    }
    int ret=-1, ind = 1, lc, rc, mx;
    swap(heap[ind], heap[cnt]);
    ret = heap[cnt--];
    rc = lc = ind*2;
    rc++;

    while(lc<=cnt)
    {
        if(rc <= cnt)
            mx = max(heap[lc], heap[rc]);
        else
            mx = heap[lc];
        if(mx > heap[ind])
        {
            if(heap[lc] == mx)
            {
                swap(heap[lc], heap[ind]);
                ind = lc;
            }
            else
            {
                swap(heap[rc], heap[ind]);
                ind = rc;
            }
        }
        else
            return ret;
        rc = lc = ind*2;
        rc++;
    }
    return ret;
}

void Heap::print_heap()
{
    for (int i = 1; i<=cnt; i++)
        cout << heap[i] << " \n"[i==cnt];
    return;
}


int HeapSort(int arr[], int n){
    Heap *hp = new Heap();

    for (int i = 0; i<n; i++)
        hp->insert_in_heap(arr[i]);
    hp->print_heap();

    for (int i = 0; i<n; i++)
        arr[i] = hp->delete_heap_root();
}


int main()
{
    int n, arr[sz], m;

    cin >> n;

    for (int i = 0; i<n; i++)
        cin >> arr[i];

    HeapSort(arr,n);

    cout << "Sorted Numbers:" << endl;

    for (int i = 0; i<n; i++)
        cout <<arr[i] <<" \n"[i==m-1];

    return 0;
}

/**
15
2 54 21 4 22 21 15 5 41 2 4 41 6 41 5
*/
