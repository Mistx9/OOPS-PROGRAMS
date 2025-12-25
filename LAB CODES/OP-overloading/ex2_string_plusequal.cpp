#include <iostream>
#include <string>
using namespace std;

class Str {
public:
    string s;
    Str(string x="") { s=x; }
    Str operator+=(Str b) {
        s += b.s;
        return *this;
    }
};

int main() {
    Str s1("Hi "), s2("Musa"), s3;
    s3 = s1 += s2;
    cout<<s3.s;
    return 0;
}
