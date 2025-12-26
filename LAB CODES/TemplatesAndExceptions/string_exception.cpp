#include <iostream>
#include <cstring>
using namespace std;

class StrErr{};

class String {
    char s[20];
public:
    String(const char x[]){
        if(strlen(x)>=20) throw StrErr();
        strcpy(s,x);
    }
};

int main(){
    try{
        String s("This string is too long for buffer");
    }catch(...){
        cout<<"String too long";
    }
    return 0;
}
