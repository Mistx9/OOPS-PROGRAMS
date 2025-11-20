#include <iostream>
using namespace std;

bool isLeap(int y){ return (y%4==0 && y%100!=0) || (y%400==0); }

int main(){
    int m,y;
    if(!(cin>>m>>y)) return 0;
    if(m<1 || m>12){ cout<<"Invalid month"; return 0; }
    int days;
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) days=31;
    else if(m==4 || m==6 || m==9 || m==11) days=30;
    else days = isLeap(y) ? 29 : 28;
    cout<<days;
}
