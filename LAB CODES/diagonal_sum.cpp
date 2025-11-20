#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int mainDiagonal = 0;
    int secondaryDiagonal = 0;

    for(int i = 0; i < n; i++) {
        mainDiagonal += A[i][i];
    }

    for(int i = 0; i < n; i++) {
        secondaryDiagonal += A[i][n - 1 - i];
    }

    cout << mainDiagonal << " " << secondaryDiagonal;
}
