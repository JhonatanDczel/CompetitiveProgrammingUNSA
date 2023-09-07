#include <bits/stdc++.h>
using namespace std;

int suma(int n) {
    if (n == 1) {
        return 1;
    }
    return n + suma(n - 1);
}

int main() {
    int n;
    cout << "Ingrese un numero n: ";
    cin >> n;

    int resultado = suma(n);
    cout << "La suma de los primeros " << n << " numeros es: " << resultado << endl;

    return 0;
}

