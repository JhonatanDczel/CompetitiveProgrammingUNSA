/*
Ejercicio 1: Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división.
*/
#include <iostream>

using namespace std;

int main(){
  double num1, num2;
  cout << "Enter two numbers\n";
  cin >> num1 >> num2;
  cout << "The sum is: " << num1 + num2 << "\n";
  cout << "The difference is: " << num1 - num2 << "\n";
  cout << "The product is: " << num1 * num2 << "\n";
  cout << "The div is: " << num1 / num2 << "\n";
  return 0;
}

