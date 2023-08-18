#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c;
    cout<<"introdusca raizes abc\n";
    cin>>a>>b>>c;
    cout<<(-b+sqrt(b*b-4*a*c))/2*a;

    return 0;
}