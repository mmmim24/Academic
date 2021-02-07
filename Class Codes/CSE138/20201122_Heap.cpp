#include <iostream>
#define sz 1000
using namespace std;

struct node{
    int val;
    node *left, *right, *parent;
    node(int x){
        val = x;
        left = right = parent = NULL;
    }
};

struct heap{
    node *root;
    int next_node;
    heap();
    void insert_in_heap(int);
    int delete_heap_root();
    void print_preorder();

    /// Utility Function
    void traverse_preorder(node*);
    void print_node(node*);
};

heap::heap(){
    root = NULL;
    next_node = 1;
}

void heap::insert_in_heap(int x){
    node *cur = new node(x);
    if(root==NULL){
        root = cur;
        next_node++;
        return;
    }
    node *temp, *temp2, *temp3;
    temp = root;
    bool started = false;
    for (int i = 30; i>0; i--)
    {
        if( (next_node & (1<<i) ) && !started ) {
                started = true;
                continue;
        }
        if(!started) continue;
        if(next_node & (1<<i) ) temp = temp->right;
        else temp = temp->left;
    }

    if(temp->left == NULL)
        temp->left = cur;
    else
        temp->right = cur;
    cur->parent = temp;
    next_node++;

    temp = cur; /// child
    temp2 = cur->parent; /// parent

    while(temp != root && temp->val > temp2->val){
        swap(temp->val, temp2->val); /// can change
        temp = temp2;
        temp2 = temp2->parent;
    }
}

int heap::delete_heap_root(){
    int delete_node = next_node - 1, ret=-1;
    if(delete_node<1){
        cout <<"Underflow!" << endl;
        return ret;
    }
    ret = root->val;
    if(delete_node==1){
        delete root;
        root = NULL;
        next_node--;
        return ret;
    }
    node *temp;
    temp = root;
    bool started = false;
//    cerr << root->val  << ":" << temp->val << endl;
    for (int i = 30; i>=0; i--)
    {
        if( (delete_node & (1<<i) ) && !started ) {
                started = true;
                continue;
        }
        if(!started) continue;
        if(delete_node & (1<<i) ) temp = temp->right;
        else temp = temp->left;
    }

    swap(root->val,temp->val); /// can change

    if( temp->parent->left == temp) temp->parent->left = NULL;
    else temp->parent->right = NULL;
    delete temp;

    temp = root;
    int mx_child=-1;
    if(temp->right!=NULL && temp->left != NULL)
        mx_child = max(temp->right->val,temp->left->val);
    else if(temp->right!=NULL) mx_child = temp->right->val; /// redundant
    else if(temp->left!=NULL) mx_child = temp->left->val;
    while(mx_child != -1 && mx_child > temp->val ){
        if(temp->right != NULL && mx_child == temp->right->val) {
            swap(temp->val, temp->right->val);
            temp = temp->right;
        }
        else{
            swap(temp->val, temp->left->val);
            temp = temp->left;
        }

        if(temp->right!=NULL && temp->left != NULL)
            mx_child = max(temp->right->val,temp->left->val);
        else if(temp->right!=NULL) mx_child = temp->right->val; /// redundant
        else if(temp->left!=NULL) mx_child = temp->left->val;
        else mx_child = -1;
    }
    next_node--;
    return ret;
}

void heap::print_node(node *cur){
    cout << "Val = " << cur->val << ";" << "Add = " << cur << endl;
    if(cur->left!=NULL) cout << "Left   = " << cur->left->val << ";" << "Add = " << cur->left << endl;
    else cout << "Left Child does not exist!" << endl;
    if(cur->right!=NULL) cout << "Right  = " << cur->right->val << ";" << "Add = " << cur->right << endl;
    else cout << "Right Child does not exist!" << endl;
    if(cur->parent!=NULL) cout << "Parent = " << cur->parent->val << ";" << "Add = " << cur->parent << endl;
    else cout << "Parent does not exist!" << endl;
    cout <<"--------" << endl;
}

void heap::traverse_preorder(node *cur){
    print_node(cur);
    if(cur->left!=NULL) traverse_preorder(cur->left);
    if(cur->right!=NULL) traverse_preorder(cur->right);
}

void heap::print_preorder(){
    cout << "Pre order Traversal Start ---------- " << endl;
    if(root!=NULL) traverse_preorder(root);
    else cout << "NULL TREE!" << endl;
    cout << "Pre order Traversal End   ---------- " << endl;
}

int unify(int arr[], int n){
    heap *hp = new heap();

    for (int i = 0; i<n; i++)
        hp->insert_in_heap(arr[i]);
    hp->print_preorder();
    int cnt = 0;
    arr[cnt++] = hp->delete_heap_root();

    for (int i = 1; i<n; i++)
    {
        int x = hp->delete_heap_root();
        if(x==arr[cnt-1]) continue;
        arr[cnt++] = x;
    }
    return cnt;
}


int main()
{
    int n, arr[sz], m;

    cin >> n;

    for (int i = 0; i<n; i++)
        cin >> arr[i];

    m = unify(arr,n);

    cout << "Total # " << m << endl;

    for (int i = 0; i<m; i++)
        cout <<arr[i] <<" \n"[i==m-1];

    return 0;
}

/**
15
2 54 21 4 22 21 15 5 41 2 4 41 6 41 5
*/
