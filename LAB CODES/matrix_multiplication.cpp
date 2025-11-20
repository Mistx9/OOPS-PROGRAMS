#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if(c1 != r2) return 0;

    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));
    vector<vector<int>> R(r1, vector<int>(c2, 0));

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << R[i][j] << " ";
        }
        cout << endl;
    }
}
