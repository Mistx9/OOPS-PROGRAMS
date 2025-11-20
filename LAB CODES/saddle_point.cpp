#include <iostream>
#include <vector>
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
        int rowMin = A[i][0];
        int colIdx = 0;

        for(int j = 1; j < c; j++) {
            if(A[i][j] < rowMin) {
                rowMin = A[i][j];
                colIdx = j;
            }
        }

        bool saddle = true;

        for(int k = 0; k < r; k++) {
            if(A[k][colIdx] > rowMin) {
                saddle = false;
                break;
            }
        }

        if(saddle) {
            cout << rowMin << " " << i << " " << colIdx;
            return 0;
        }
    }

    cout << "No saddle point";
}
