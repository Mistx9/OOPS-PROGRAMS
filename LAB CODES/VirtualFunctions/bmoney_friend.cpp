#include <iostream>
using namespace std;

class bMoney {
    long double amt;
public:
    bMoney(long double a=0){ amt=a; }
    friend bMoney operator*(long double, bMoney);
    void show(){ cout<<amt; }
};

bMoney operator*(long double x, bMoney b){
    return bMoney(x * b.amt);
}

int main(){
    bMoney m(100);
    bMoney r = 2 * m;
    r.show();
    return 0;
}
