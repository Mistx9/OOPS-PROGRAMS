#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    double a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    bool valid = (a+b>c && a+c>b && b+c>a);
    if(!valid){ cout<<"Not a triangle"; return 0; }
    if(a==b && b==c) cout<<"Equilateral";
    else if(a==b || b==c || a==c) cout<<"Isosceles";
    else cout<<"Scalene";
    double sides[3]={a,b,c};
    sort(sides,sides+3);
    if(fabs(sides[0]*sides[0]+sides[1]*sides[1]-sides[2]*sides[2])<1e-6) cout<<"\nRight-angled";
}
