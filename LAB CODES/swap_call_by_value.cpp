#include <iostream>
using namespace std;

void swapValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}

int main(){
    int x,y;
    cin>>x>>y;
    swapValue(x,y);
    cout<<x<<" "<<y;
}
