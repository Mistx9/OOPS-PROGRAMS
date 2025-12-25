#include <iostream>
using namespace std;

class Fraction {
    int n,d;
public:
    Fraction(int x=0,int y=1){n=x;d=y;}
    Fraction operator+(Fraction f){
        return Fraction(n*f.d + f.n*d, d*f.d);
    }
    void show(){ cout<<n<<"/"<<d; }
};

int main(){
    Fraction a(1,2), b(1,3), c;
    c = a + b;
    c.show();
    return 0;
}
