#include <iostream>
using namespace std;

template<class T>
class SafeArray {
    T a[10];
public:
    T& operator[](int i){
        if(i<0 || i>=10) exit(0);
        return a[i];
    }
};

int main(){
    SafeArray<int> s;
    s[2]=50;
    cout<<s[2];
    return 0;
}
