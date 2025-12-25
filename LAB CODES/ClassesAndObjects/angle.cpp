#include <iostream>
using namespace std;

class Angle {
    int deg;
    float min;
    char dir;
public:
    Angle(int d=0,float m=0,char c='N'){ deg=d;min=m;dir=c; }
    void get(){ cin>>deg>>min>>dir; }
    void show(){ cout<<deg<<"°"<<min<<"’ "<<dir; }
};

int main(){
    Angle a(149,34.8,'W');
    a.show();
    return 0;
}
