#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    if(!(cin>>a>>b>>c>>d)) return 0;
    int mx = max(max(a,b), max(c,d));
    int mn = min(min(a,b), min(c,d));
    cout<< "Largest " << mx << endl;
    cout<< "Smallest " << mn;
}
