#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        if(b > c){
            cout << a;
        }else if(c > a){
            cout << c;
        }else{
            cout << a;
        }
    }else if(a > c){
        cout << b;
    }else if(c > b){
        cout << c;
    }else{
        cout << b;
    }
    return 0;
}