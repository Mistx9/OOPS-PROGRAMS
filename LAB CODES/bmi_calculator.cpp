#include <iostream>
using namespace std;

class BMI{
    float w,h;
public:
    BMI(float x,float y){ w=x; h=y; }
    float calc(){ return w/(h*h); }
};

int main(){
    float w,h;
    cin>>w>>h;
    BMI b(w,h);
    float v=b.calc();
    cout<<v<<endl;
    if(v<18.5) cout<<"Underweight";
    else if(v<25) cout<<"Normal";
    else cout<<"Overweight";
}
