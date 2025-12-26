#include <iostream>
using namespace std;

class Bounds {
public:
    int index;
    Bounds(int i){ index=i; }
};

class SafeArray {
    int a[5];
public:
    int& operator[](int i){
        if(i<0 || i>=5) throw Bounds(i);
        return a[i];
    }
};

int main(){
    try{
        SafeArray s;
        s[7]=5;
    }catch(Bounds b){
        cout<<"Invalid index "<<b.index;
    }
    return 0;
}
