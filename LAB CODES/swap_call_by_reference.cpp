#include <iostream>
using namespace std;

void swapReference(int &x, int &y){
    int t=x;
    x=y;
    y=t;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    swapReference(a,b);
    cout<<a<<" "<<b;
}
