#include <iostream>
#include <string>
using namespace std;

int str2b(const string &s){
    if(s=="1"||s=="true"||s=="True") return 1;
    return 0;
}

int main(){
    string a,b,op;
    cin >> a >> op >> b;
    int A = str2b(a);
    int B = str2b(b);
    int res=0;
    if(op=="AND") res = A && B;
    if(op=="OR") res = A || B;
    if(op=="XOR") res = A ^ B;
    cout << res << endl;
    cout << "Truth table for 3 vars (A B C):" << endl;
    for(int A2=0;A2<=1;A2++) for(int B2=0;B2<=1;B2++) for(int C2=0;C2<=1;C2++){
        cout << A2 << " " << B2 << " " << C2 << " | ";
        cout << ( (A2 && B2) || C2 ) << endl;
    }
}
