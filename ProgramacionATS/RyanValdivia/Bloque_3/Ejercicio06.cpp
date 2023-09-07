#include <iostream>

using namespace std;

int main(){
    char s;
    cin >> s;
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
        cout << "Es una vocal minuscula" << endl;
    }else if(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U'){
        cout << "No es una vocal minuscula" << endl;
    }else{
        cout << "No es una vocal" << endl;
    }
    return 0;
}