/*
Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al
10 y muestre en la salida estándar su tabla de multiplicar.
*/
#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Ingrese un numero del 1 al 10: "; cin >> n;
  int i = 1;
  while(i <= 12){
    cout << n << " x " << i << " = " << n * i << "\n";
    i++; 
  }
  return 0;
}