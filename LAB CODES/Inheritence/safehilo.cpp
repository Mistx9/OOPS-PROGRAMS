#include <iostream>
using namespace std;

class safearray {
protected:
    int arr[100];
public:
    int& operator[](int i){ return arr[i]; }
};

class safehilo : public safearray {
    int low, high;
public:
    safehilo(int l,int h){ low=l; high=h; }
    int& operator[](int i){
        if(i<low || i>high) exit(0);
        return arr[i-low];
    }
};

int main(){
    safehilo a(10,20);
    a[10]=5;
    cout<<a[10];
    return 0;
}
