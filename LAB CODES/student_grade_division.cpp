#include <iostream>
using namespace std;

int main(){
    double m1,m2,m3,m4,m5;
    if(!(cin>>m1>>m2>>m3>>m4>>m5)) return 0;
    double total = m1+m2+m3+m4+m5;
    double perc = total/5.0;
    cout<<"Percentage "<<perc<<endl;
    if(perc>=90) cout<<"Grade A Distinction";
    else if(perc>=75) cout<<"Grade B First Division";
    else if(perc>=60) cout<<"Grade C Second Division";
    else if(perc>=40) cout<<"Grade D Pass";
    else cout<<"Fail";
}
