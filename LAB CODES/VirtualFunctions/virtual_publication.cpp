#include <iostream>
using namespace std;

class publication {
protected:
    string title;
    float price;
public:
    virtual void getdata() {
        cin >> title >> price;
    }
    virtual void putdata() {
        cout << title << " " << price;
    }
};

class book : public publication {
    int pages;
public:
    void getdata() {
        publication::getdata();
        cin >> pages;
    }
    void putdata() {
        publication::putdata();
        cout << " " << pages;
    }
};

class tape : public publication {
    float time;
public:
    void getdata() {
        publication::getdata();
        cin >> time;
    }
    void putdata() {
        publication::putdata();
        cout << " " << time;
    }
};

int main() {
    publication* p[2];
    p[0] = new book;
    p[1] = new tape;

    for(int i=0;i<2;i++) p[i]->getdata();
    for(int i=0;i<2;i++){ p[i]->putdata(); cout<<endl; }

    return 0;
}
