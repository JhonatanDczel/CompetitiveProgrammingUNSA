#include <iostream>
using namespace std;
int main() {
    char caracter;
    cin >> caracter;
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        cout << "El caracter es una vocal minuscula" << endl;
    } else if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
        cout << "El caracter es una vocal mayuscula" << endl;
    } else {
        cout << "El caracter no es una vocal" << endl;
    }

    return 0;
}