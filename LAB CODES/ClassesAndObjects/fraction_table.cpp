#include <iostream>
using namespace std;

class Fraction {
public:
    int n,d;
    Fraction(int a=0,int b=1){ n=a; d=b; }
    Fraction mul(Fraction f){
        return Fraction(n*f.n, d*f.d);
    }
};

int main(){
    int d;
    cin>>d;
    for(int i=1;i<d;i++){
        for(int j=1;j<d;j++){
            Fraction a(i,d), b(j,d), c;
            c=a.mul(b);
            cout<<c.n<<"/"<<c.d<<" ";
        }
        cout<<endl;
    }
    return 0;
}
