#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> A(r, vector<int>(c));

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        sort(A[i].begin(), A[i].end());
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int j = 0; j < c; j++) {
        vector<int> column(r);
        for(int i = 0; i < r; i++) {
            column[i] = A[i][j];
        }
        sort(column.begin(), column.end());
        for(int i = 0; i < r; i++) {
            A[i][j] = column[i];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
