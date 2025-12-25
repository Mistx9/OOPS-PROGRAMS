#include <iostream>
using namespace std;

class Time {
    int h,m,s;
public:
    Time(){ h=m=s=0; }
    Time(int a,int b,int c){ h=a;m=b;s=c; }
    void add(Time t1, Time t2){
        h=t1.h+t2.h; m=t1.m+t2.m; s=t1.s+t2.s;
    }
    void show() const { cout<<h<<":"<<m<<":"<<s; }
};

int main(){
    Time t1(1,2,3), t2(2,3,4), t3;
    t3.add(t1,t2);
    t3.show();
    return 0;
}
