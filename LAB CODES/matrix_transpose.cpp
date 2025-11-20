#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> A(r, vector<int>(c));
    vector<vector<int>> T(c, vector<int>(r));

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
}
