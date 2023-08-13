/*
Ejercicio 5: Escriba un programa que lea de la entrada estándar un carácter e indique
en la salida estándar si el carácter es una vocal minúscula o no.
*/
#include <iostream>
using namespace std;
int main(){
  char c;
  cout << "Ingrese una letra: "; cin >> c;
  switch (c){
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout << "Es una vocal minúscula\n";
    break;
  default:
    cout << "No es una vocal minúscula\n";
    break;
  }
  return 0;
}