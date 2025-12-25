#include <iostream>
using namespace std;

class manager {
protected:
    int id;
public:
    void get(){ cin>>id; }
};

class executive : public manager {
    double bonus;
    int shares;
public:
    void getdata(){ manager::get(); cin>>bonus>>shares; }
    void show(){ cout<<id<<" "<<bonus<<" "<<shares; }
};

int main(){
    executive e;
    e.getdata();
    e.show();
    return 0;
}
