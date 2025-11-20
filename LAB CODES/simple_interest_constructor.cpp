#include <iostream>
using namespace std;

class Interest{
    float p,r,t;
public:
    Interest(float a,float b,float c){
        p=a; r=b; t=c;
    }
    float calc(){ return (p*r*t)/100; }
};

int main(){
    float p,r,t;
    cin>>p>>r>>t;
    Interest obj(p,r,t);
    cout<<obj.calc();
}
