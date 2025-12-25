#include <iostream>
using namespace std;

class Time {
    int h,m;
public:
    Time(int x=0,int y=0){h=x;m=y;}
    Time operator+(Time t){
        return Time(h+t.h, m+t.m);
    }
    void show(){ cout<<h<<" "<<m; }
};

int main(){
    Time t1(2,30), t2(1,20), t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}
