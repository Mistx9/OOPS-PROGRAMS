#include <iostream>
using namespace std;

class publication {
protected:
    string title;
    float price;
public:
    void get(){ cin>>title>>price; }
    void show(){ cout<<title<<" "<<price<<" "; }
};

class sales {
protected:
    float s[3];
public:
    void get(){ cin>>s[0]>>s[1]>>s[2]; }
    void show(){ cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "; }
};

class book : public publication, public sales {
public:
    void getdata(){ publication::get(); sales::get(); }
    void putdata(){ publication::show(); sales::show(); }
};

int main(){
    book b;
    b.getdata();
    b.putdata();
    return 0;
}
