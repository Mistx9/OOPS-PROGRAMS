#include <iostream>
using namespace std;

class Sterling {
    double amt;
public:
    Sterling(double x=0){amt=x;}
    Sterling operator+(Sterling s){
        return Sterling(amt+s.amt);
    }
    void show(){ cout<<amt; }
};

int main(){
    Sterling a(5.5), b(2.2), c;
    c = a + b;
    c.show();
    return 0;
}
