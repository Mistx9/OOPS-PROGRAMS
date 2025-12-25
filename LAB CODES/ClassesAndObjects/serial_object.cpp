#include <iostream>
using namespace std;

class Count {
    static int cnt;
    int id;
public:
    Count(){ id=++cnt; }
    void show(){ cout<<"I am object "<<id<<endl; }
};
int Count::cnt=0;

int main(){
    Count a,b,c;
    a.show(); b.show(); c.show();
    return 0;
}
