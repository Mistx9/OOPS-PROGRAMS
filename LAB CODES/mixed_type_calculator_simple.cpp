#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main(){
    string t; double a,b;
    if(!(cin >> t >> a >> b)) return 0;
    if(t=="int"){
        long long ai = (long long) a;
        long long bi = (long long) b;
        long long add = ai + bi;
        long long sub = ai - bi;
        long long mul = ai * bi;
        cout << "add " << add;
        if(add > numeric_limits<int>::max() || add < numeric_limits<int>::min()) cout << " WARNING_OVERFLOW";
        cout << endl;
        cout << "sub " << sub;
        if(sub > numeric_limits<int>::max() || sub < numeric_limits<int>::min()) cout << " WARNING_OVERFLOW";
        cout << endl;
        cout << "mul " << mul;
        if(mul > numeric_limits<int>::max() || mul < numeric_limits<int>::min()) cout << " WARNING_OVERFLOW";
        cout << endl;
        if(bi!=0){
            cout << "div " << (ai/bi) << endl;
            cout << "mod " << (ai%bi) << endl;
        } else cout << "div ERROR_DIV_BY_ZERO" << endl;
    } else {
        float af = (float)a;
        float bf = (float)b;
        float add = af + bf;
        float sub = af - bf;
        float mul = af * bf;
        float div = bf!=0.0f ? af / bf : NAN;
        cout << "add " << add;
        if(!isfinite(add)) cout << " WARNING";
        cout << endl;
        cout << "sub " << sub << endl;
        cout << "mul " << mul;
        if(!isfinite(mul)) cout << " WARNING";
        cout << endl;
        if(isnan(div)) cout << "div ERROR_DIV_BY_ZERO" << endl;
        else { cout << "div " << div; if(!isfinite(div)) cout << " WARNING"; cout << endl; }
    }
}
