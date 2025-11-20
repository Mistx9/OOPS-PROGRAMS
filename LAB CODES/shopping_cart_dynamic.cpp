#include <iostream>
using namespace std;

class Item{
    float *p;
    int *q;
public:
    Item(float price,int qty){
        p = new float(price);
        q = new int(qty);
    }
    float total(){ return (*p)*(*q); }
    ~Item(){ delete p; delete q; }
};

int main(){
    float price; int qty;
    cin>>price>>qty;
    Item obj(price,qty);
    cout<<obj.total();
}
