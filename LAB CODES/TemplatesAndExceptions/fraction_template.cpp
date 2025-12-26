#include <iostream>
using namespace std;

template<class T>
class Fraction {
    T n,d;
public:
    Fraction(T a=0,T b=1){ n=a; d=b; }
    Fraction add(Fraction f){
        return Fraction(n*f.d + f.n*d, d*f.d);
    }
    void show(){ cout<<n<<"/"<<d; }
};

int main(){
    Fraction<char> f1(1,2), f2(1,3), f3;
    f3=f1.add(f2);
    f3.show();
    return 0;
}
