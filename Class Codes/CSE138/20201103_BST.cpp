#include <iostream>
using namespace std;

struct node{
    int val;
    node *left, *right, *parent;
    node(int x){
        val = x;
        left = right = parent = NULL;
    }
};

struct BST{
    node *root;
    /// constructor
    BST();
    ///utility function
    node* find_child(int,node*);
    node* find_succ(node*);
    node* find_node(int);
    void print_node(node*);
    void pre_t_node(node*);
    void in_t_node(node*);
    void post_t_node(node*);

    /// global function
    void insert(int);
    void del(int);
    bool find(int);
    void pre_traverse();
    void in_traverse();
    void post_traverse();
};


BST::BST(){
    root = NULL;
}

node* BST::find_child(int val, node *temp){
    if(temp->val <= val) return temp->right;
    return temp->left;
}

void BST::insert(int x)
{
    node *cur = new node(x), *temp, *temp_child;
    if(root == NULL){
        root = cur;
        return;
    }
    temp = root;
    temp_child = find_child(x,temp);
    while(temp_child!=NULL){
        temp = temp_child;
        temp_child = find_child(x,temp);
    }
    if(temp->val <= x) temp->right = cur;
    else temp->left = cur;
    cur->parent = temp;
}

node* BST::find_node(int x)
{
    node  *temp, *temp_child;
    if(root == NULL)
        return NULL;
    temp = root;
    temp_child = find_child(x,temp);
    while(temp_child != NULL){
        if(temp->val == x) return temp;
        temp = temp_child;
        temp_child = find_child(x,temp);
    }
    return temp;
}

node* BST::find_succ(node* temp)
{
    if(temp->right->left==NULL) return temp->right;
    node *ret = temp->right;
    while(ret->left!=NULL)
        ret = ret->left;
    return ret;
}

void BST::del(int x)
{
    node *temp = find_node(x), *temp_child, *in_succ;
//    print_node(temp);
    if(temp==NULL){
        cout << x << " does not exists!\n";
        return;
    }
    /// case 1
    if(temp->left==NULL && temp->right == NULL){
        if(temp == root)
            root = NULL;
        else if(temp->parent->left == temp)
            temp->parent->left = NULL;
        else
            temp->parent->right = NULL;
        delete temp;
        return;
    }
    /// case 2
    if(temp->left==NULL || temp->right == NULL){
        temp_child =  temp->left==NULL?temp->right:temp->left;
        if(temp == root)
            root = temp_child;
        else if(temp->parent->left == temp){
            temp->parent->left = temp_child;
            temp_child->parent = temp->parent;
        }

        else{
            temp->parent->right = temp_child;
            temp_child->parent = temp->parent;
        }
        delete temp;
        return;
    }
    /// case 3
    in_succ = find_succ(temp);
    node *cur = new node(in_succ->val);

    cur->left = temp->left;
    bool direct_succ = temp->right == in_succ;
    if(!direct_succ)
        cur->right = temp->right;
    else
        cur->right = in_succ->right;
    temp->left->parent = cur;
//    int xxxxx;
//    pre_traverse();
//    print_node(in_succ);
//    cin >> xxxxx;
    del(in_succ->val); /// problem suspected

    if(temp->right != NULL )temp->right->parent = cur;
    if(temp==root) root = cur;
    else{
        cur->parent = temp->parent;
        if(temp->parent->left == temp) temp->parent->left = cur;
        else temp->parent->right = cur;
    }
    delete temp;
    return;
}

bool BST::find(int x)
{
    node *temp = find_node(x);
    return (temp!=NULL && temp->val==x);
}

void BST::print_node(node *cur){
    cout << "Val = " << cur->val << ";" << "Add = " << cur << endl;
    if(cur->left!=NULL) cout << "Left   = " << cur->left->val << ";" << "Add = " << cur->left << endl;
    else cout << "Left Child does not exist!" << endl;
    if(cur->right!=NULL) cout << "Right  = " << cur->right->val << ";" << "Add = " << cur->right << endl;
    else cout << "Right Child does not exist!" << endl;
    if(cur->parent!=NULL) cout << "Parent = " << cur->parent->val << ";" << "Add = " << cur->parent << endl;
    else cout << "Parent does not exist!" << endl;
    cout <<"--------" << endl;
}

void BST::pre_t_node(node *cur){
    print_node(cur);
    if(cur->left!=NULL) pre_t_node(cur->left);
    if(cur->right!=NULL) pre_t_node(cur->right);
}

void BST::in_t_node(node *cur){
    if(cur->left!=NULL) in_t_node(cur->left);
    print_node(cur);
    if(cur->right!=NULL) in_t_node(cur->right);
}

void BST::post_t_node(node *cur){
    if(cur->left!=NULL) post_t_node(cur->left);
    if(cur->right!=NULL) post_t_node(cur->right);
    print_node(cur);
}

void BST::pre_traverse(){
    cout << "Pre order Traversal Start ---------- " << endl;
    if(root!=NULL) pre_t_node(root);
    else cout << "NULL TREE!" << endl;
    cout << "Pre order Traversal End   ---------- " << endl;
}

void BST::in_traverse(){
    cout << "In order Traversal Start ---------- " << endl;
    if(root!=NULL) in_t_node(root);
    else cout << "NULL TREE!" << endl;
    cout << "In order Traversal End   ---------- " << endl;
}

void BST::post_traverse(){
    cout << "Post order Traversal Start ---------- " << endl;
    if(root!=NULL) post_t_node(root);
    else cout << "NULL TREE!" << endl;
    cout << "Post order Traversal End   ---------- " << endl;
}

int main()
{
    int n, m, x, y, res;
    BST *bst = new BST();
    cin >> m;
    for (int i = 0; i<m; i++)
    {
        /// 1 - insert, 2 - delete, 3 - find
        cin >> x >> y;
        bst->pre_traverse();
        switch (x)
        {
        case 1:
            bst->insert(y);
            break;

        case 2:
            bst->del(y);
            break;

        case 3:
            res = bst->find(y);
            cout << y << " is" << (res?"":" not") << " found!\n";
            break;
        default:
            cout << "Ops! I cannot read your mind!\n";
            break;
        }
        bst->pre_traverse();
    }
    return 0;
}
/**
15
1 38
1 14
1 56
1 8
1 23
1 18
1 56
1 45
1 82
1 70
2 45
2 23
2 14
3 45
3 70

3
1 25
1 26
2 26

*/

