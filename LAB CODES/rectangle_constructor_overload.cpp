#include <iostream>
using namespace std;

class Rectangle{
    float l,w;
public:
    Rectangle(float x,float y){ l=x; w=y; }
    Rectangle(float x){ l=x; w=x; }
    float area(){ return l*w; }
    float peri(){ return 2*(l+w); }
};

int main(){
    Rectangle r1(4,6);
    Rectangle r2(5);
    cout<<r1.area()<<" "<<r1.peri()<<endl;
    cout<<r2.area()<<" "<<r2.peri();
}
