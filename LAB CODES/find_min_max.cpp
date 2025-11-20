#include <iostream>
using namespace std;

void findMinMax(int *arr, int n, int &minv, int &maxv){
    minv = arr[0];
    maxv = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minv) minv=arr[i];
        if(arr[i]>maxv) maxv=arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int mn,mx;
    findMinMax(a,n,mn,mx);
    cout<<mn<<" "<<mx;
}
