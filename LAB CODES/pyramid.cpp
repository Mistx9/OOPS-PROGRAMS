#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=20;i++){
        for(int s=1;s<=20-i;s++) cout << " ";
        for(int x=1;x<=2*i-1;x++) cout << "X";
        cout << endl;
    }
}
