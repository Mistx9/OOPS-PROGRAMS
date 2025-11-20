#include <iostream>
using namespace std;

int main() {
    int id;
    double rate, hrs;
    double total = 0;
    int count = 0;
    while(cin >> id >> rate >> hrs){
        double gross = rate * hrs;
        if(hrs > 40) gross = rate*40 + (hrs-40)*rate*1.5;
        double net = gross - gross*0.03625;
        cout << id << " " << net << endl;
        total += net;
        count++;
    }
    cout << total << endl;
    cout << total / count;
}
