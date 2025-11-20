#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x, sum = 0, small, large;
    cin >> x;
    small = large = sum = x;
    for(int i=1;i<n;i++){
        cin >> x;
        if(x < small) small = x;
        if(x > large) large = x;
        sum += x;
    }
    cout << small << " " << large << " " << sum/n;
}