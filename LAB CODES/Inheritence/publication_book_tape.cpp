#include <iostream>
using namespace std;

class publication {
protected:
    string title;
    float price;
public:
    void getdata(){ cin>>title>>price; }
    void putdata(){ cout<<title<<" "<<price<<" "; }
};

class book : public publication {
    int pages;
public:
    void getdata(){ publication::getdata(); cin>>pages; }
    void putdata(){ publication::putdata(); cout<<pages; }
};

class tape : public publication {
    float time;
public:
    void getdata(){ publication::getdata(); cin>>time; }
    void putdata(){ publication::putdata(); cout<<time; }
};

int main(){
    book b; tape t;
    b.getdata(); t.getdata();
    b.putdata(); cout<<endl;
    t.putdata();
    return 0;
}
