#include <iostream>
using namespace std;

class Temperature{
    float c;
public:
    Temperature(float x){ c=x; }
    float toF(){ return (c*9/5)+32; }
};

int main(){
    float c;
    cin>>c;
    Temperature t(c);
    cout<<t.toF();
}
