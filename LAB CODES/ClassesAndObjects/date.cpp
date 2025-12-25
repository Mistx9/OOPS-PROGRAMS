#include <iostream>
using namespace std;

class Date {
    int d,m,y;
public:
    void getdate(){ cin>>d>>m>>y; }
    void showdate(){ cout<<d<<"/"<<m<<"/"<<y; }
};

int main(){
    Date x;
    x.getdate();
    x.showdate();
    return 0;
}
