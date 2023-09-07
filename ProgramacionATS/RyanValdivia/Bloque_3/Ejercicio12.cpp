#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num, opc;
    cout << "Seleccione una opción" << endl;
    cout << "1. Cubo de un número" << endl;
    cout << "2. Número par o impar" << endl;
    cout << "3. Salir" << endl;
    cin >> opc;

    switch (opc){
    case 1: cin >> num;
        cout << pow(num, 3);
        break;
    case 2: cin >> num;
        if(num % 2 == 0){
            cout << "Es par" << endl;
        }else{
            cout << "Es inpar" << endl;
        }
        break;
    case 3: break;
    default:
        break;
    }
    return 0;
}