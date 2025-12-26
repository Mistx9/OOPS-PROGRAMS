#include <iostream>
using namespace std;

class horse {
protected:
    float pos;
public:
    horse(){ pos=0; }
    virtual void tick(){ pos+=1; }
    float get(){ return pos; }
};

class comhorse : public horse {
public:
    void tick(){
        pos += 1.5;
    }
};

int main(){
    horse* h = new comhorse;
    h->tick();
    cout<<h->get();
    return 0;
}
