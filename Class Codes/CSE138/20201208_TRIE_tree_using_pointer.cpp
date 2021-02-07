#include <iostream>
#define sz 10000
using namespace std;


#define trie_sz 26
struct node{
    bool ending;
    node *next[trie_sz];
    node()
    {
        ending = false;
        for (int i = 0; i<trie_sz; i++)
            next[i] = NULL;
    }
};

struct TRIE{
    node *root;
    TRIE();
    void insert_into_trie(string &str);
    bool search_into_trie(string &str);
    void delete_from_trie();

    /// utility function
    void delete_node(node *cur);
};

TRIE::TRIE(){
    root = new node();
}

void TRIE::insert_into_trie(string &str){
    node *cur = root;
    int now, len = str.size();
    for (int i  = 0; i<len; i++)
    {
        now = str[i] - 'a';
        if(cur->next[now] == NULL)
            cur->next[now] =  new node();
        cur = cur->next[now];
    }
    cur->ending =  true;
}
bool TRIE::search_into_trie(string &str){
    node *cur = root;
    int now, len = str.size();
    for (int i = 0; i<len; i++)
    {
        now = str[i] - 'a';
        if(cur->next[now] == NULL) return false;
        cur = cur->next[now];
    }
    return cur->ending;
}

void TRIE::delete_node(node *cur){
    for (int i = 0; i<trie_sz; i++)
        if(cur->next[i]!=NULL) delete_node(cur->next[i]);
    delete cur;
}

void TRIE::delete_from_trie(){
    delete_node(root);
}
int main()
{
    int n, q;
    string str;
    TRIE *tr = new TRIE();

    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> str;
        tr->insert_into_trie(str);
    }

    cin >> q;

    for (int i = 0; i<q; i++)
    {
        cin >> str;
        cout << str <<" does " << (tr->search_into_trie(str)?"":"not ") << "exist!" << endl;
    }
    tr->delete_from_trie();
    return 0;
}
/**
17
abcdaabcdefa
ababcadacc
aaa
aa
aab
aabccc
aabc
aab
abcdaabcde
wow
this
that
those
this
is
absolutely
vogue
10
these
is
i
absolute
abcdaabcd
vog
abcdaabcdefa
aaaa
aabc
aabcc
*/
