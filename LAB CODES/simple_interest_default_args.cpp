#include <iostream>
using namespace std;

float simpleInterest(float p, float r=5.0, float t=2.0){
    return (p*r*t)/100;
}

int main(){
    cout<<simpleInterest(1000)<<endl;
    cout<<simpleInterest(1000,7)<<endl;
    cout<<simpleInterest(1000,7,3);
}
