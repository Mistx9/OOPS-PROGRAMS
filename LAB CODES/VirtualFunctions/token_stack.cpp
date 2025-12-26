#include <iostream>
using namespace std;

class Token {
public:
    virtual float getNumber()=0;
    virtual char getOperator()=0;
};

class Number : public Token {
    float n;
public:
    Number(float x){ n=x; }
    float getNumber(){ return n; }
    char getOperator(){ return 0; }
};

class Operator : public Token {
    char op;
public:
    Operator(char c){ op=c; }
    float getNumber(){ return 0; }
    char getOperator(){ return op; }
};

int main(){
    Token* t1 = new Number(5.5);
    Token* t2 = new Operator('+');

    cout<<t1->getNumber()<<" "<<t2->getOperator();
    return 0;
}
