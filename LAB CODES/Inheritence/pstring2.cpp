#include <iostream>
#include <cstring>
using namespace std;

class Pstring {
protected:
    char str[80];
public:
    Pstring(){ str[0]='\0'; }
};

class Pstring2 : public Pstring {
public:
    void left(const char s[], int n) {
        strncpy(str, s, n);
        str[n] = '\0';
    }
    void show() {
        cout << str;
    }
};

int main() {
    Pstring2 p;
    p.left("Inheritance", 4);
    p.show();
    return 0;
}