#include <iostream>
using namespace std;

template<class T>
class Queue {
    T q[10];
    int f,r;
public:
    Queue(){ f=r=0; }
    void push(T x){ q[r++]=x; }
    T pop(){ return q[f++]; }
};

int main(){
    Queue<int> q;
    q.push(10); q.push(20);
    cout<<q.pop();
    return 0;
}