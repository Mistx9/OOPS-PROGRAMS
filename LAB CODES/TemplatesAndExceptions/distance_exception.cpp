#include <iostream>
using namespace std;

class DistErr{};

class Distance {
    int feet,inches;
public:
    Distance(int f,int i){
        if(i>=12) throw DistErr();
        feet=f; inches=i;
    }
};

int main(){
    try{
        Distance d(5,14);
    }catch(...){
        cout<<"Invalid inches";
    }
    return 0;
}
