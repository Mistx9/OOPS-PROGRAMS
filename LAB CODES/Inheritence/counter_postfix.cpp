#include <iostream>
using namespace std;

class Counter {
protected:
    int c;
public:
    Counter(){ c=0; }
    void operator++(){ ++c; }
};

class Counter2 : public Counter {
public:
    void operator++(int){ c++; }
    int show(){ return c; }
};

int main(){
    Counter2 x;
    x++; ++x;
    cout<<x.show();
    return 0;
}
