#include <iostream>
using namespace std;

class Date {
public:
    int d,m,y;
};

class publication2 {
protected:
    string title;
    Date dt;
public:
    void get(){ cin>>title>>dt.d>>dt.m>>dt.y; }
    void show(){ cout<<title<<" "<<dt.d<<"/"<<dt.m<<"/"<<dt.y; }
};

int main(){
    publication2 p;
    p.get();
    p.show();
    return 0;
}
