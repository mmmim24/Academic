#include <iostream>
#define sz 3
using namespace std;
struct stack{
    int a[sz], top;
    stack(){
        top=-1;
    }
    void push(int x){
        if(top==sz-1){
            cout << "Overflow!" << endl;
            return;
        }
        a[++top]=x;
    }
    int Top(){
        if(!(~top)){
            cout << "Empty Stack!" << endl;
            return -1;
        }
        return a[top];
    }
    int pop(){
        if(!(~top)){
            cout << "Underflow!" << endl;
            return -1;
        }
        return a[top--];
    }
    bool empty(){
        return !(~top);
    }
    void printStack(){
        cout << "Start Stack --------------" << endl;
        if(!(~top)){
            cout << "Empty Stack!" << endl;
            cout << "End Stack   --------------" << endl;
            return;
        }
        for (int i = top; i>=0; i--)
            cout << a[i] << ",\n"[i==0];
        cout << "End Stack   --------------" << endl;
    }
};

int main()
{
    stack *st=new stack();
    st->printStack();
    cout << st->Top() << endl;
    st->pop();
    cout << st->empty() << endl;
    st->push(90);
    st->pop();
    st->pop();
    st->push(75);
    st->printStack();
    st->push(45);
    st->printStack();
    cout << st->empty() << endl;
    st->push(451);
    st->printStack();
    cout << st->Top() << endl;
    st->push(-98);
    st->printStack();
    cout << st->Top() << endl;
    st->push(81);
    st->printStack();
    st->pop();
    st->printStack();
    st->pop();
    st->printStack();
    st->pop();
    st->printStack();
    st->pop();
    st->printStack();
    cout << st->Top() << endl;
    st->pop();
    st->printStack();
    cout << st->empty() << endl;
    delete st;
    return 0;
}
