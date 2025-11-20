#include <iostream>
using namespace std;

void swapPointer(int *x, int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

int main(){
    int a,b;
    cin>>a>>b;
    swapPointer(&a,&b);
    cout<<a<<" "<<b;
}
