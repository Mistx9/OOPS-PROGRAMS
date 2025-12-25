#include <iostream>
using namespace std;

class Time {
    int h;
public:
    Time(int x=0){h=x;}
    Time operator-(Time t){ return Time(h - t.h); }
    Time operator*(float n){ return Time(h*n); }
    void show(){ cout<<h; }
};

int main(){
    Time t1(5), t2(2), t3;
    t3 = t1 * 2;
    t3.show();
    return 0;
}
