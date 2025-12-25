#include <iostream>
using namespace std;

enum period { hourly, weekly, monthly };

class employee {
protected:
    int id;
public:
    void get(){ cin>>id; }
};

class employee2 : public employee {
    double compensation;
    period p;
public:
    void getdata(){ employee::get(); cin>>compensation; int x; cin>>x; p=(period)x; }
    void show(){ cout<<id<<" "<<compensation<<" "<<p; }
};

int main(){
    employee2 e;
    e.getdata();
    e.show();
    return 0;
}
