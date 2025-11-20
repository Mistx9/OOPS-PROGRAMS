#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

double mean(const vector<double>& v){
    double s=0; for(double x:v) s+=x; return s/v.size();
}
double median(vector<double> v){
    sort(v.begin(), v.end());
    int n=v.size();
    if(n%2) return v[n/2];
    return (v[n/2-1]+v[n/2])/2.0;
}
double mode(const vector<double>& v){
    unordered_map<long long,int> cnt;
    for(double x:v) cnt[llround(x*1e6)]++;
    int best=0; long long val=0;
    for(auto &p:cnt) if(p.second>best){ best=p.second; val=p.first; }
    return val/1e6;
}
double stddev(const vector<double>& v){
    double m = mean(v);
    double s=0; for(double x:v) s += (x-m)*(x-m);
    return sqrt(s/v.size());
}

int main(){
    int n; if(!(cin>>n)) return 0;
    vector<double> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    cout << "Double mean " << mean(v) << endl;
    cout << "Double median " << median(v) << endl;
    cout << "Double mode " << mode(v) << endl;
    cout << "Double stddev " << stddev(v) << endl;

    vector<float> vf(n);
    for(int i=0;i<n;i++) vf[i] = (float)v[i];
    vector<double> v_from_f(n);
    for(int i=0;i<n;i++) v_from_f[i] = vf[i];

    cout << "From float mean " << mean(v_from_f) << endl;
    cout << "From float median " << median(v_from_f) << endl;
    cout << "From float mode " << mode(v_from_f) << endl;
    cout << "From float stddev " << stddev(v_from_f) << endl;
}
