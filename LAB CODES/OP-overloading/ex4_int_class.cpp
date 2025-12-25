#include <iostream>
using namespace std;

class Int {
    int x;
public:
    Int(int a=0){x=a;}
    Int operator+(Int b){ return Int(x+b.x); }
    Int operator-(Int b){ return Int(x-b.x); }
    Int operator*(Int b){ return Int(x*b.x); }
    Int operator/(Int b){ return Int(x/b.x); }
    void show(){ cout<<x; }
};

int main(){
    Int a(10), b(2), c;
    c = a * b;
    c.show();
    return 0;
}
