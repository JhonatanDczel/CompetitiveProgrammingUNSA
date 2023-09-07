#include <iostream>

using namespace std;

int main(){
    char s;
    cin >> s;
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
        cout << "Es una vocal minuscula";
    }else{
        cout << "No es una vocal minuscula";
    }
    return 0;
}