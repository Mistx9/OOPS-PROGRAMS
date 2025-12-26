#include <iostream>
using namespace std;

class Bounds{};

class SafeArray {
    int a[5];
public:
    int& operator[](int i){
        if(i<0 || i>=5) throw Bounds();
        return a[i];
    }
};

int main(){
    SafeArray s;
    try{
        s[6]=10;
    }catch(...){
        cout<<"Out of Bounds";
    }
    return 0;
}
