#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int opc, numero, resultado;

    cout <<"Bienvenido a la mini calculadora lineal en C++" <<endl;
    cout <<"(1) Cubo de un numero" <<endl;
    cout <<"(2) Numero par o impar" <<endl;
    cout <<"(3) Salir" <<endl;

    cout <<"Elegir opcion: "; cin >>opc;
    cout <<"Ingresa el numero: "; cin >>numero;

    switch(opc){
        case 1:
            numero = pow(numero, 3);
            cout <<"El cubo es: " <<numero;
            break;
        case 2:
        if(numero!=0){
            numero = numero%2;
            if(numero==0){
                cout <<"El numero es par"; } else{cout <<"El numero es impar"; }
        }
        else{
            cout <<"El numero es 0";
        }
        break;
        case 3:
        break;
    }
}

int main()
{

}