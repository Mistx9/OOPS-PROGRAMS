#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int key;
    cin >> key;
    string caesar="";
    for(char c: s) caesar.push_back(char(c + key));
    cout << "Before ASCII: ";
    for(char c: s) cout << int((unsigned char)c) << " ";
    cout << endl;
    cout << "Caesar: " << caesar << endl;
    cout << "After ASCII: ";
    for(char c: caesar) cout << int((unsigned char)c) << " ";
    cout << endl;
    string xorenc="";
    int xkey;
    cin >> xkey;
    for(char c: s) xorenc.push_back(char(((unsigned char)c) ^ xkey));
    cout << "XOR: " << xorenc << endl;
    cout << "XOR ASCII: ";
    for(char c: xorenc) cout << int((unsigned char)c) << " ";
}
