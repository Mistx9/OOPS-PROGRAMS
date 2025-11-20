#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b){ return a+b; }
int sum(int a, int b, int c){ return a+b+c; }
string sum(string a, string b){ return a+b; }

int main(){
    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,4)<<endl;
    cout<<sum(string("Hello "), string("World"));
}
