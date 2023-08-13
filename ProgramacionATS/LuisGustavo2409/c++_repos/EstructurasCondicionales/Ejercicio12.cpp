/*
Ejercicio 12: Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Case 3: salir.
*/
#include <iostream>
using namespace std;
int main(){
  int op;
  cout << "Bienvenido al genio de operaciones\n1. Cubo de un numero\n2. Numero par o Impar\n3. Salir\nOpcion? "; cin >> op;
  int n;
  switch(op){
    case 1: 
      cout << "Ingrese numero: "; cin >> n;
      cout << "El resultado es: " << n * n * n << "\n";
      break;
    case 2: 
      cout << "Ingrese numero: "; cin >> n;
      if(n % 2 == 0)
        cout << "El numero es par\n";
      else 
        cout << "El numero es impar\n";
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