#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    float r,a;
public:
    Polar(float x=0,float y=0){r=x;a=y;}
    Polar operator+(Polar p){
        float x = r*cos(a)+p.r*cos(p.a);
        float y = r*sin(a)+p.r*sin(p.a);
        return Polar(sqrt(x*x+y*y), atan(y/x));
    }
};

int main(){
    Polar p1(5,0.5), p2(4,0.2), p3;
    p3 = p1 + p2;
    return 0;
}
