#include <iostream>
using namespace std;

class Full{};
class Empty{};

template<class T>
class Queue {
    T q[5];
    int f,r,c;
public:
    Queue(){ f=r=c=0; }
    void push(T x){
        if(c==5) throw Full();
        q[r++]=x; c++;
    }
    T pop(){
        if(c==0) throw Empty();
        c--; return q[f++];
    }
};

int main(){
    Queue<int> q;
    try{
        q.push(1); q.push(2);
        cout<<q.pop();
    }catch(...){
        cout<<"Queue Error";
    }
    return 0;
}
