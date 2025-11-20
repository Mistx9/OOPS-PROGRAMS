#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cin >> r1 >> c1;
    vector<vector<int>> A(r1, vector<int>(c1));
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin >> A[i][j];

    cin >> r2 >> c2;
    vector<vector<int>> B(r2, vector<int>(c2));
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin >> B[i][j];

    vector<vector<int>> I(r1, vector<int>(c2,0));
    vector<vector<float>> F(r1, vector<float>(c2,0));
    vector<vector<double>> D(r1, vector<double>(c2,0));

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                I[i][j] += A[i][k] * B[k][j];
                F[i][j] += (float)A[i][k] * (float)B[k][j];
                D[i][j] += (double)A[i][k] * (double)B[k][j];
            }
        }
    }

    cout << "Int\n";
    for(auto &row : I){
        for(auto x : row) cout << x << " ";
        cout << endl;
    }

    cout << "Float\n";
    for(auto &row : F){
        for(auto x : row) cout << x << " ";
        cout << endl;
    }

    cout << "Double\n";
    for(auto &row : D){
        for(auto x : row) cout << x << " ";
        cout << endl;
    }
}
