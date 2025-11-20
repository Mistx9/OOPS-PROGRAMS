#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double r1 = (a*b)/c;
    double r2 = (a/c)*b;
    cout << "r1 " << r1 << " r2 " << r2 << endl;
    float epsf = 1.0f;
    while(1.0f + epsf/2.0f != 1.0f) epsf /= 2.0f;
    double epsd = 1.0;
    while(1.0 + epsd/2.0 != 1.0) epsd /= 2.0;
    cout << "float epsilon " << epsf << endl;
    cout << "double epsilon " << epsd << endl;
}
