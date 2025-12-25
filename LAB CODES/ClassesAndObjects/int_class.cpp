#include <iostream>
using namespace std;

class Int {
    int x;
public:
    Int(){ x=0; }
    Int(int a){ x=a; }
    void add(Int a, Int b){ x = a.x + b.x; }
    void show(){ cout<<x; }
};

int main(){
    Int a, b(5), c(10);
    a.add(b,c);
    a.show();
    return 0;
}
