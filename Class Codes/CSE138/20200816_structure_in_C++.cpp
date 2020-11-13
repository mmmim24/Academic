#include <iostream>
using namespace std;

struct node{
    int x;
    node(){
        x = 0;
        cout << "x is initialized by " << x << endl;
    }
    node(int);
    void hello();


    ~node(){
        cout << "Bye bye!" << " x > " << x << endl;
    }
};

node::node(int k){
        x = k;
        cout << "x is initialized by " << x << endl;
    }

void node::hello(){
    x += 35;
    cout << "x is incremented by 35 and x = " << x << endl;
}


void hello(){
    node k(66);
}

int main()
{
    node a, b(5000), *p;

    cout << "What happened?" << endl;
    a.x = 45;
    a.hello();
    p = new node(690);
    p->x = 99;
    hello();
    p->hello();
    delete p;
    return 0;
}
