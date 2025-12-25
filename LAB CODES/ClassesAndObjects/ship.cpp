#include <iostream>
using namespace std;

class Angle {
public:
    int d; float m; char dir;
};

class Ship {
    static int cnt;
    int id;
    Angle lat,lon;
public:
    Ship(){ id=++cnt; }
    void get(){
        cin>>lat.d>>lat.m>>lat.dir;
        cin>>lon.d>>lon.m>>lon.dir;
    }
    void show(){
        cout<<"Ship "<<id<<" ";
        cout<<lat.d<<" "<<lat.dir<<" ";
        cout<<lon.d<<" "<<lon.dir;
    }
};
int Ship::cnt=0;

int main(){
    Ship s;
    s.get();
    s.show();
    return 0;
}
