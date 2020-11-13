#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED

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

#endif // MYSTACK_H_INCLUDED
