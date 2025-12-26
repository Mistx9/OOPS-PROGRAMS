#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class linklist {
    node* head;
public:
    linklist(){ head=NULL; }

    linklist(const linklist& l){ head=l.head; }

    linklist& operator=(const linklist& l){
        head=l.head;
        return *this;
    }
};

int main(){
    linklist a,b;
    b=a;
    return 0;
}
