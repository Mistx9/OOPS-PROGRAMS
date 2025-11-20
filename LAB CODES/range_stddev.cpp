#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x, sum = 0, sumsq = 0, small, large;
    cin >> x;
    sum = x;
    sumsq = x*x;
    small = large = x;
    for(int i=1;i<n;i++){
        cin >> x;
        sum += x;
        sumsq += x*x;
        if(x < small) small = x;
        if(x > large) large = x;
    }
    double avg = sum/n;
    double sd = sqrt((sumsq/n) - (avg*avg));
    cout << "Range: " << large - small << endl;
    cout << "SD: " << sd;
}
