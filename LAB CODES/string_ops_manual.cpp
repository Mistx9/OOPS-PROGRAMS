#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=0;
    for(char c: s) n++;
    string rev="";
    for(int i=n-1;i>=0;i--) rev.push_back(s[i]);
    cout << "Length " << n << endl;
    cout << "Reverse " << rev << endl;
    int l,r;
    cin >> l >> r;
    if(l<0) l=0;
    if(r>n) r=n;
    string sub="";
    for(int i=l;i<r;i++) sub.push_back(s[i]);
    cout << "Substring " << sub << endl;
    string t;
    cin.ignore();
    getline(cin,t);
    string cat = s;
    for(char c: t) cat.push_back(c);
    cout << "Concat " << cat << endl;
    char ch;
    cin >> ch;
    int freq=0;
    for(char c: s) if(c==ch) freq++;
    cout << "Freq " << freq;
}
