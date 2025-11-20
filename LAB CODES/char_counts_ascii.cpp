#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int up=0,low=0,dig=0,ws=0,spec=0;
    for(char c: s){
        int a = (unsigned char)c;
        if(a>=65 && a<=90) up++;
        else if(a>=97 && a<=122) low++;
        else if(a>=48 && a<=57) dig++;
        else if(a==32 || a==9 || a==10) ws++;
        else spec++;
    }
    cout << "Upper " << up << endl;
    cout << "Lower " << low << endl;
    cout << "Digits " << dig << endl;
    cout << "Whitespace " << ws << endl;
    cout << "Special " << spec << endl;
}
