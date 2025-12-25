#include <iostream>
using namespace std;

class Fraction {
    int n,d;
public:
    void get(){ cin>>n>>d; }
    void add(Fraction a, Fraction b){
        n=a.n*b.d + b.n*a.d;
        d=a.d*b.d;
    }
    void show(){ cout<<n<<"/"<<d; }
};

int main(){
    Fraction a,b,c;
    a.get(); b.get();
    c.add(a,b);
    c.show();
    return 0;
}
