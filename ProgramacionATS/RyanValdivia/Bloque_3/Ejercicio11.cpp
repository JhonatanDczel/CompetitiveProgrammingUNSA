#include <iostream>
using namespace std;

int main(){
    int inicial = 1000, opc;
    double retiro, ingreso, saldo;
    cout << "Bienvenido a su cajero virtual" << endl;
    cout << "1. Ingresar dinero" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opc;

    switch(opc){
        case 1: 
            cin >> ingreso;
            saldo = inicial + ingreso;
            break;
        case 2:
            cin >> retiro;
            if(retiro > inicial){
                cout << "No tiene suficiente saldo" << endl;
            }else{
                saldo = inicial - retiro;
            }
            break;
        case 3:
            break;
    }
    cout << "Saldo actual: " << saldo;
    return 0;
}