#include <iostream>
using namespace std;

enum dtype { CD, DVD };

class publication {
protected:
    string title;
    float price;
public:
    void get(){ cin>>title>>price; }
    void show(){ cout<<title<<" "<<price<<" "; }
};

class disk : public publication {
    dtype d;
public:
    void getdata(){ publication::get(); char c; cin>>c; d=(c=='c')?CD:DVD; }
    void putdata(){ publication::show(); cout<<(d==CD?"CD":"DVD"); }
};

int main(){
    disk d;
    d.getdata();
    d.putdata();
    return 0;
}
