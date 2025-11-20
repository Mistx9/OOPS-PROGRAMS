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

    int mx = A[0][0], mn = A[0][0];
    int mxr = 0, mxc = 0, mnr = 0, mnc = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(A[i][j] > mx) {
                mx = A[i][j];
                mxr = i;
                mxc = j;
            }
            if(A[i][j] < mn) {
                mn = A[i][j];
                mnr = i;
                mnc = j;
            }
        }
    }

    cout << mx << " " << mxr << " " << mxc << endl;
    cout << mn << " " << mnr << " " << mnc;
}
