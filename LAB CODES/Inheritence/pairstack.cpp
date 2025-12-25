#include <iostream>
using namespace std;

struct pair2 { int x,y; };

class Stack2 {
protected:
    int st[100], top;
public:
    Stack2(){ top=0; }
    void push(int v){ st[top++]=v; }
    int pop(){ return st[--top]; }
};

class pairStack : public Stack2 {
public:
    void push(pair2 p){ Stack2::push(p.x); Stack2::push(p.y); }
    pair2 pop(){
        pair2 p;
        p.y=Stack2::pop();
        p.x=Stack2::pop();
        return p;
    }
};

int main(){
    pairStack s;
    pair2 p={1,2};
    s.push(p);
    p=s.pop();
    cout<<p.x<<" "<<p.y;
    return 0;
}
