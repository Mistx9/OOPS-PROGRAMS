#include <iostream>
#include <cmath>
using namespace std;

class bMoney {
    long double amt;
public:
    bMoney(long double a=0){ amt=a; }
    friend bMoney round(bMoney);
    void show(){ cout<<amt; }
};

bMoney round(bMoney m){
    long double ip;
    long double frac = modfl(m.amt, &ip);
    if(frac>=0.5) ip++;
    return bMoney(ip);
}

int main(){
    bMoney m(10.6);
    bMoney r = round(m);
    r.show();
    return 0;
}
