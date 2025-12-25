#include <iostream>
#include <cstring>
using namespace std;

class String {
protected:
    char str[80];
public:
    String(const char s[] = "") {
        strcpy(str, s);
    }
};

class Pstring : public String {
public:
    Pstring(const char s[]) {
        strncpy(str, s, 79);
        str[79] = '\0';
    }
    void show() {
        cout << str;
    }
};

int main() {
    Pstring p("This string is intentionally very long to test overflow protection");
    p.show();
    return 0;
}
