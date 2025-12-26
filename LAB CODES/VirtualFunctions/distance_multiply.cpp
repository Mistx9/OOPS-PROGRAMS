#include <iostream>
using namespace std;

class Distance {
    float d;
public:
    Distance(float x=0){ d=x; }
    friend Distance operator*(float a, Distance b);
    void show(){ cout<<d; }
};

Distance operator*(float a, Distance b){
    return Distance(a * b.d);
}

int main(){
    Distance d(5);
    Distance r = 2.5 * d;
    r.show();
    return 0;
}
