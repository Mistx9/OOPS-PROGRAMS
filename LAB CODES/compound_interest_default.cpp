#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest{
    double p,r,t,n;
public:
    CompoundInterest(double a,double b,double c,double d=1){
        p=a; r=b; t=c; n=d;
    }
    double amount(){ return p*pow((1+r/n),n*t); }
};

int main(){
    double p,r,t,n;
    cin>>p>>r>>t>>n;
    CompoundInterest obj(p,r,t,n);
    cout<<obj.amount();
}
