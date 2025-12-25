#include <iostream>
using namespace std;

class bMoney {
    long double m;
public:
    bMoney(long double x=0){m=x;}
    bMoney operator+(bMoney b){ return bMoney(m+b.m); }
    bMoney operator-(bMoney b){ return bMoney(m-b.m); }
    void show(){ cout<<m; }
};

int main(){
    bMoney a(100), b(40), c;
    c = a - b;
    c.show();
    return 0;
}
