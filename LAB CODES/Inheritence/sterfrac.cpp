#include <iostream>
using namespace std;

class sterling {
protected:
    double amt;
public:
    sterling(double a=0){ amt=a; }
};

class sterfrac : public sterling {
    int eighths;
public:
    sterfrac(double a=0,int e=0):sterling(a){ eighths=e; }
    void show(){ cout<<amt<<"-"<<eighths<<"/8"; }
};

int main(){
    sterfrac s(5,3);
    s.show();
    return 0;
}
