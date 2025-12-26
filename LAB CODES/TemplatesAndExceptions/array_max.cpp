#include <iostream>
using namespace std;

template<class T>
T amax(T a[], int n){
    T m=a[0];
    for(int i=1;i<n;i++)
        if(a[i]>m) m=a[i];
    return m;
}

int main(){
    int a[]={2,9,4};
    cout<<amax(a,3);
    return 0;
}
