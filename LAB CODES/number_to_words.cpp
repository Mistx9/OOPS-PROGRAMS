#include <iostream>
#include <string>
using namespace std;

string one_to_nineteen(int n){
    string w[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
    "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    return w[n];
}
string tens_word(int n){
    string t[]={"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    return t[n];
}

int main(){
    int n;
    if(!(cin>>n)) return 0;
    if(n>=0 && n<20) cout<<one_to_nineteen(n);
    else if(n>=20 && n<100){
        int t = n/10;
        int u = n%10;
        if(u==0) cout<<tens_word(t);
        else cout<<tens_word(t)<<" "<<one_to_nineteen(u);
    } else cout<<"Out of range";
}
