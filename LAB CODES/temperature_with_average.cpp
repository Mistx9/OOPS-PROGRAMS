#include <iostream>
using namespace std;

int main() {
    int x, hot = 0, pleasant = 0, cold = 0, count = 0;
    double sum = 0;
    while(cin >> x){
        sum += x;
        count++;
        if(x >= 85){ hot++; cout << "Hot\n"; }
        else if(x >= 60){ pleasant++; cout << "Pleasant\n"; }
        else { cold++; cout << "Cold\n"; }
    }
    cout << hot << " " << pleasant << " " << cold << endl;
    cout << sum / count;
}
