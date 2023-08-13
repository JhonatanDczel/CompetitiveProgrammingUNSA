/*
Ejercicio 2: Escribir un programa que de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA.
*/
#include <iostream>

using namespace std;

int main(){
  double price;
  cout << "Enter a price\n";
  cin >> price;
  cout << "Price with IVA: " << price * 1.18 << "\n"; 

  return 0;
}