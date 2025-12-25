#include <iostream>
using namespace std;

class Time {
    int h;
public:
    Time(int x=0){h=x;}
    Time operator++(){ ++h; return *this; }
    Time operator++(int){ Time t=*this; h++; return t; }
    void show(){ cout<<h; }
};

int main(){
    Time t(5);
    t++;
    ++t;
    t.show();
    return 0;
}
