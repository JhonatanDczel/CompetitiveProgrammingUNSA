/*
Ejercicio 11: Hacer un programa que simule un cajero automático con un saldo inicial
de 1000 Dólares.
*/
#include <iostream>
using namespace std;
int main(){
  int op;
  cout << "Bienvenido al cajero\n1. Retiro\n2. Deposito\n3. Salir\nOpcion? "; cin >> op;
  switch(op){
    case 1: 
      int ret;
      cout << "Cuanto desea retirar? "; cin >> ret;
      if(ret < 1000)
        cout << "Operacion exitosa!\nSu saldo actual: " << 1000 - ret << "\n";
      else  
        cout << "No puede retirar esa cantidad de dinero, solo dispone de 1000 dolares\n";
      break;
    case 2:
      int dep;
      cout << "Cuanto desea depositar? "; cin >> dep;
      cout << "Operacion exitosa!\nSu saldo actual: " << 1000 + dep << "\n";
      break;
    case 3: 
      cout << "Hasta pronto:)\n";
      break;
    default:
      cout << "Ingrese una opcion adecuada por favor\n";
      break;
  }
  return 0;
}