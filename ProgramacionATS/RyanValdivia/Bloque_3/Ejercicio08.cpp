#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == d){
        cout << "Si coincide";
    }else if(b == d){
        cout << "Si coincide";
    }else if(c == d){
        cout << "Si coincide";
    }else{
        cout << "No coincide";
    }
    return 0;
}