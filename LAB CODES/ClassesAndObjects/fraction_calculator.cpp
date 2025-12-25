#include <iostream>
using namespace std;

class Fraction {
    int n,d;
public:
    Fraction(int a=0,int b=1){ n=a; d=b; }
    Fraction add(Fraction f){
        return Fraction(n*f.d + f.n*d, d*f.d);
    }
    void show(){ cout<<n<<"/"<<d; }
};

int main(){
    Fraction a(1,2), b(1,3), c;
    c = a.add(b);
    c.show();
    return 0;
}
