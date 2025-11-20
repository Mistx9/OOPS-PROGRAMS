#include <iostream>
using namespace std;

class Bill{
    int units;
public:
    Bill(int u){ units=u; }
    Bill(const Bill &b){ units=b.units; }
    int calc(){ return units*5; }
};

int main(){
    Bill b1(120);
    Bill b2=b1;
    cout<<b1.calc()<<endl;
    cout<<b2.calc();
}
