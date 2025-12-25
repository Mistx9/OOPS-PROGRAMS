#include <iostream>
using namespace std;

class Sterling;

class bMoney {
public:
    double d;
    bMoney(double x=0){d=x;}
    operator Sterling();
};

class Sterling {
public:
    double p;
    Sterling(double x=0){p=x;}
    operator bMoney(){ return bMoney(p*50); }
};

bMoney::operator Sterling(){ return Sterling(d/50); }

int main(){
    bMoney b(100);
    Sterling s = b;
    cout<<s.p;
    return 0;
}
