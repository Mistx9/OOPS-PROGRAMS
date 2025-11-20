#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double d;
    cin >> d;
    float f = (float)d;
    double c2f = f * 9.0/5.0 + 32.0;
    double c2k = (double)f + 273.15;
    cout << setprecision(10);
    cout << "float->F " << c2f << " float->K " << c2k << endl;
    double dF = d * 9.0/5.0 + 32.0;
    double dK = d + 273.15;
    cout << "double->F " << dF << " double->K " << dK << endl;
    double big = 1e30;
    float bigf = (float)big;
    cout << "big float loss " << bigf << " big double " << big << endl;
}
