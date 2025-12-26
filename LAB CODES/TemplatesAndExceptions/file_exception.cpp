#include <iostream>
#include <fstream>
using namespace std;

class FileErr{};

class dofile {
    fstream f;
public:
    dofile(const char* name){
        f.open(name,ios::in);
        if(!f) throw FileErr();
    }
};

int main(){
    try{
        dofile d("abc.txt");
    }catch(...){
        cout<<"File error";
    }
    return 0;
}
