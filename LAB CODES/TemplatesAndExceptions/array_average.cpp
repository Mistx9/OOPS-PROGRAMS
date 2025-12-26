#include <iostream>
using namespace std;

template<class T>
T average(T a[], int n){
    T sum = 0;
    for(int i=0;i<n;i++) sum += a[i];
    return sum / n;
}

int main(){
    int a[]={2,4,6,8};
    double b[]={1.5,2.5,3.5};
    cout<<average(a,4)<<endl;
    cout<<average(b,3);
    return 0;
}
