#include <iostream>

using namespace std;

int main(){

    int a, b, suma, resta, multiplicacion, division;

    cout << "Ingrese el primer numero" << endl; cin >> a;
    cout << "Ingrese el segundo numero" << endl; cin >> b;

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;

    cout << "\nLa suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "El producto es: " << multiplicacion << endl; 

    if(b != 0){
        division = a / b;
        cout << "El cociente es: " << division << endl;
    }else{
        cout << "No se puede dividir por 0";
    }

    return 0;
}


