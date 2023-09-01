#include <iostream>
using namespace std;

struct Ncomplex {
    double re;
    double im;
};

Ncomplex sumaComplejos(Ncomplex num1, Ncomplex num2) {
    Ncomplex res;
    res.re = num1.re + num2.re;
    res.im = num1.im + num2.im;
    return res;
}

int main() {
    Ncomplex num1, num2;

    cout << "Ingrese la parte real del primer numero complejo: ";
    cin >> num1.re;
    cout << "Ingrese la parte imaginaria del primer numero complejo: ";
    cin >> num1.im;

    cout << "Ingrese la parte real del segundo numero complejo: ";
    cin >> num2.re;
    cout << "Ingrese la parte imaginaria del segundo numero complejo: ";
    cin >> num2.im;

    Ncomplex suma = sumaComplejos(num1, num2);

    cout << "La suma de los dos numeros complejos es: " << suma.re << " + " << suma.im << "i" << endl;

    return 0;
}

