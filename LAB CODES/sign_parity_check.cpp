#include <iostream>
using namespace std;

int main(){
    int x;
    if(!(cin>>x)) return 0;
    if(x==0) cout<<"Zero";
    else {
        string s = x>0 ? "Positive " : "Negative ";
        if(abs(x)%2==0) cout<<s<<"Even";
        else cout<<s<<"Odd";
    }
}
