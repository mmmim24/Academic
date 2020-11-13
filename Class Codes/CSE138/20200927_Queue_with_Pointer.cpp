#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node()
    {
        val = 0;
        next = NULL;
    }
    node(int k)
    {
        val = k;
        next = NULL;
    }
};

struct queue{
    node *front,*rear;
    queue()
    {
        front = rear = NULL;
    }
    void push(int);
    int pop();
    int Front();
    bool empty();
    void printQueue();
};

void queue::push(int x)
{
    node *cur = new node(x);
    if(empty())
        front = rear = cur;
    else
        rear = rear->next = cur;/// rear->next = cur; rear = cur;
}

int queue::pop()
{
    int ret=-1;
    if(empty()){
        cout << "Underflow!" << endl;
        return ret;
    }
    node *temp = front;
    ret = front->val;
    if(front==rear)
        rear = NULL;
    front = front->next;
    delete temp;
    return ret;
}

int queue::Front()
{
    int ret=-1;
    if(empty()){
        cout << "Queue Empty!" << endl;
        return ret;
    }
    return front->val;
}

void queue::printQueue()
{
    cout << "Start Queue ------------" << endl;
    if(empty()){
        cout << "Empty Queue!" << endl;
        cout << "End Queue   ------------" << endl;
        return;
    }
    node *cur = front;

    while(cur!=NULL){
        cout << cur->val <<",\n"[cur->next==NULL];
        cur = cur->next;
    }
    cout << "End Queue   ------------" << endl;
}

bool queue::empty()
{
    return rear==NULL;
}
int main()
{
    queue *q=new queue();
    q->printQueue();
    cout << q->Front() << endl;
    q->pop();
    cout << q->empty() << endl;
    q->push(90);
    q->pop();
    q->pop();
    q->push(75);
    q->printQueue();
    q->push(45);
    q->printQueue();
    cout << q->empty() << endl;
    q->pop();
    q->printQueue();
    q->push(451);
    q->printQueue();
    cout << q->Front() << endl;
    q->push(-98);
    q->printQueue();
    cout << q->Front() << endl;
    q->push(81);
    q->printQueue();
    q->pop();
    q->printQueue();
    q->pop();
    q->printQueue();
    q->pop();
    q->printQueue();
    cout << q->Front() << endl;
    q->pop();
    q->printQueue();
    cout << q->empty() << endl;
    delete q;
    return 0;
}
