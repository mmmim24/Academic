#include <iostream>
using namespace std;

struct node{
    string val;
    node *prev;
    node()
    {
        val ="";
        prev = NULL;
    }
    node(string x)
    {
        val = x;
        prev = NULL;
    }
};

struct Stack{
    node *top;
    Stack(){
        top = NULL;
    }
    void push(string);
    string pop();
    string Top();
    bool empty();
    void printStack();
    int size();
};

void Stack::push(string x)
{
    node *cur = new node(x);
    if(top!=NULL)
        cur->prev = top;
    top = cur;
}

string Stack::pop()
{
    node *cur = top;
    if(top==NULL){
        cout << "Underflow!\n";
        return "";
    }

    top = top->prev;
    string ret = cur->val;
    delete cur;
    return ret;
}

string Stack::Top()
{
    if(top==NULL){
        cout << "Stack is empty!\n";
        return "";
    }
    return top->val;
}

bool Stack::empty()
{
    return top==NULL;
}

int main()
{
    Stack *st = new Stack();
    cout <<"Empty1 = " << st->empty() << endl;
    st->push("65");
    st->push("6");
    st->push("+");
    cout <<"Top = " << st->Top() << endl;
    cout <<"Empty2 = " << st->empty() << endl;
    st->push("105");
    for (int i = 0; i<5; i++)
        cout << i << ": " << st->pop() << endl;
    cout <<"Empty3 = " << st->empty() << endl;
    cout <<"Empty4 = " << st->Top() << endl;
    return 0;
}
