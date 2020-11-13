#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "myStack.h"

int opPre(string x)
{
    if(x=="+" || x=="-") return 1;
    if(x=="*" || x=="/") return 2;
    if(x=="^") return 3;
    return 0;
}

vector<string> infixToPostfix(vector<string> q)
{
    vector<string>p;
    Stack *st = new Stack();
    st->push("(");
    q.push_back(")");
    for (string &x: q)
    {
        if(opPre(x))
        {
            while(opPre(x) <= opPre(st->Top()) )
                p.push_back(st->pop());
            st->push(x);
        }
        else if(x=="(") st->push("(");
        else if(x==")")
        {
            while(st->Top()!="(")
                p.push_back(st->pop());
            st->pop();
        }
        else p.push_back(x);

    }
    delete st;
    return p;
}

int strToInt(string s)
{
    int ret = 0;
    for (int i = 0; i<s.size(); i++)
    {
        ret*=10;
        ret+=(s[i]-'0');
    }
    return ret;
}

int doOp(int a, int b, string x)
{
    if(x=="-") return b-a;
    if(x=="*") return b*a;
    if(x=="/") return b/a;
    if(x=="+") return b+a;
    int ret = 1;
    for (int i = 0; i<a; i++)
        ret *= b;
    return ret;
}

int evalPostfix(vector<string> p)
{
    p.push_back(")");
    Stack *st = new Stack();
    int a, b;
    for(string &x: p)
    {
        if(opPre(x))
        {
            a = strToInt(st->pop());
            b = strToInt(st->pop());
            st->push(to_string(doOp(a,b,x)));
        }
        else if(x==")") break;
        else st->push(x);
    }
    int ret = strToInt(st->pop());
    delete st;
    return ret;
}


int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i<n; i++)
        cin >> v[i];

    vector<string> postfix = infixToPostfix(v);

//    for (string x : postfix )
//        cout << " >> " << x;
//    cout << endl;
    int res = evalPostfix(postfix);

    cout << "Result = " << res << endl;

    return 0;
}
/**
21
65 + ( 7 * 985 - ( 16 / 2 ^ 3 ) * 25 ) * 99 + 9

*/
