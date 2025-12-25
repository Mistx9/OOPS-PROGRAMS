#include <iostream>
using namespace std;

enum etype { laborer, manager };

class Date {
public:
    int d,m,y;
};

class employee {
    int id;
    float sal;
    Date doj;
    etype t;
public:
    void get(){
        cin>>id>>sal>>doj.d>>doj.m>>doj.y;
        int x; cin>>x; t=(etype)x;
    }
    void show(){
        cout<<id<<" "<<sal<<" "<<doj.d<<"/"<<doj.m<<"/"<<doj.y<<" "<<t;
    }
};

int main(){
    employee e;
    e.get();
    e.show();
    return 0;
}
