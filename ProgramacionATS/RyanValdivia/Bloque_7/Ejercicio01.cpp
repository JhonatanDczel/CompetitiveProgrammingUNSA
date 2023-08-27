#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string cadena;
    cout << "Digite una cadena de caracteres: " << endl;
    cin >> cadena;
    if(cadena.length() > 10){
        cout << cadena << endl;
    }
    return 0;
}