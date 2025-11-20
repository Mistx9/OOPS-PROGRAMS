#include <iostream>
using namespace std;

class Distance{
public:
    int m,cm;
    Distance(int x){ m=x; cm=0; }
    Distance(int x,int y){ m=x; cm=y; }
    Distance add(Distance d){
        Distance temp(0,0);
        temp.cm = cm + d.cm;
        temp.m = m + d.m + temp.cm/100;
        temp.cm %= 100;
        return temp;
    }
};

int main(){
    Distance d1(5,80), d2(3,50);
    Distance d3 = d1.add(d2);
    cout<<d3.m<<"m "<<d3.cm<<"cm";
}
