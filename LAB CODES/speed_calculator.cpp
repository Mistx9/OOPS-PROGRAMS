#include <iostream>
using namespace std;

class Speed{
    float d,t;
public:
    Speed(float a,float b){ d=a; t=b; }
    float calc(){ return d/t; }
};

int main(){
    float d,t;
    cin>>d>>t;
    Speed s(d,t);
    cout<<s.calc();
}
