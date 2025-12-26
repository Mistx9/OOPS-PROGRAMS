#include <iostream>
using namespace std;

class Token {
public:
    virtual float value()=0;
};

class Number : public Token {
    float n;
public:
    Number(float x){ n=x; }
    float value(){ return n; }
};

int main(){
    Token* t = new Number(3.14);
    cout<<t->value();
    return 0;
}
