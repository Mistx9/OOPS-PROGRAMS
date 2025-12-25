#include <iostream>
using namespace std;

class tollBooth {
    unsigned int cars;
    double cash;
public:
    tollBooth(){ cars=0; cash=0; }
    void payingCar(){ cars++; cash+=0.5; }
    void nopayCar(){ cars++; }
    void display() const { cout<<cars<<" "<<cash; }
};

int main(){
    tollBooth t;
    t.payingCar();
    t.nopayCar();
    t.display();
    return 0;
}
