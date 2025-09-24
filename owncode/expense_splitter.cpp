#include <iostream>
using namespace std;

int main() {
    int n;
    float total, perHead;

    cout << "Enter number of roommates: ";
    cin >> n;

    cout << "Enter total monthly expenses: ";
    cin >> total;

    if (n > 0) {
        perHead = total / n;
        cout << "Each roommate has to pay: ₹" << perHead << endl;
    } else {
        cout << "Invalid number of roommates!" << endl;
    }

    return 0;
}
