#include <iostream>
using namespace std;

int main(){
    double balance = 1000.0;
    int choice;
    while(true){
        if(!(cin>>choice)) break;
        if(choice==4) break;
        if(choice==1) cout<<"Balance "<<balance<<endl;
        else if(choice==2){
            double w; cin>>w;
            if(w<=balance){ balance -= w; cout<<"Withdrawn "<<w<<endl; }
            else cout<<"Insufficient Balance"<<endl;
        } else if(choice==3){
            double d; cin>>d; balance += d; cout<<"Deposited "<<d<<endl;
        } else cout<<"Invalid"<<endl;
    }
}
