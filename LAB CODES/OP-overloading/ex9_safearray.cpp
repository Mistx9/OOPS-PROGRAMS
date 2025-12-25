#include <iostream>
using namespace std;

class SafeArray {
    int arr[100];
public:
    int& operator[](int i){
        if(i<0||i>=100) exit(0);
        return arr[i];
    }
};

int main(){
    SafeArray a;
    a[2]=10;
    cout<<a[2];
    return 0;
}
