#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string a,b,c,op1,op2;
    getline(cin,a);
    stringstream ss(a);
    double x,y,z;
    ss >> x >> op1 >> y >> op2 >> z;
    double result = x;
    if(op1=="+") result = x + y;
    if(op1=="-") result = x - y;
    if(op1=="*") result = x * y;
    if(op1=="/") result = x / y;
    if(op2=="+") result = result + z;
    if(op2=="-") result = result - z;
    if(op2=="*") result = result * z;
    if(op2=="/") result = result / z;
    cout << result;
}
