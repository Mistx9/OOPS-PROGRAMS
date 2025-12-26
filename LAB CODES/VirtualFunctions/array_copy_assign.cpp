#include <iostream>
using namespace std;

class Array {
    int* p;
    int size;
public:
    Array(int s){
        size=s;
        p=new int[s];
    }

    Array(const Array& a){
        size=a.size;
        p=new int[size];
        for(int i=0;i<size;i++) p[i]=a.p[i];
    }

    Array& operator=(const Array& a){
        if(this==&a) return *this;
        delete[] p;
        size=a.size;
        p=new int[size];
        for(int i=0;i<size;i++) p[i]=a.p[i];
        return *this;
    }

    int& operator[](int i){ return p[i]; }
};

int main(){
    Array a(3);
    a[0]=1; a[1]=2; a[2]=3;

    Array b=a;
    Array c(3);
    c=a;

    cout<<b[1]<<" "<<c[2];
    return 0;
}
