#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n){
    if(n<2) return false;
    for(long long i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
bool isArmstrong(long long n){
    long long t=n, sum=0, d;
    int cnt=0;
    for(long long x=n;x>0;x/=10) cnt++;
    while(t>0){
        d = t%10;
        long long p=1;
        for(int i=0;i<cnt;i++) p*=d;
        sum += p; t/=10;
    }
    return sum==n;
}
bool isPalindrome(long long n){
    long long t=n, r=0;
    while(t>0){ r = r*10 + t%10; t/=10; }
    return r==n;
}
long long factorial(int n){ long long f=1; for(int i=2;i<=n;i++) f*=i; return f; }

int main(){
    int choice;
    while(cin>>choice){
        if(choice==5) break;
        if(choice==1){ int n; cin>>n; cout<<factorial(n)<<endl; }
        else if(choice==2){ long long n; cin>>n; cout<<(isPrime(n)?"Prime":"Not Prime")<<endl; }
        else if(choice==3){ long long n; cin>>n; cout<<(isArmstrong(n)?"Armstrong":"Not Armstrong")<<endl; }
        else if(choice==4){ long long n; cin>>n; cout<<(isPalindrome(n)?"Palindrome":"Not Palindrome")<<endl; }
        else cout<<"Invalid option"<<endl;
    }
}
