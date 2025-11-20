#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> A(r, vector<int>(c));
    vector<vector<int>> B(r, vector<int>(c));
    vector<vector<int>> Sum(r, vector<int>(c));
    vector<vector<int>> Diff(r, vector<int>(c));

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << Diff[i][j] << " ";
        }
        cout << endl;
    }
}
