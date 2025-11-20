#include <iostream>
using namespace std;

float area(float r){ return 3.14*r*r; }
float area(float l, float b){ return l*b; }
float area(double base, double height){ return 0.5*base*height; }

int main(){
    cout<<area(5.0f)<<endl;
    cout<<area(4.0f,6.0f)<<endl;
    cout<<area(5.0,8.0);
}
