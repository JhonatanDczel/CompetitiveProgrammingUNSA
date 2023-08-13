/*
Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos
variables.
*/
#include <iostream>
using namespace std;
int main(){
  double a, b;
  cout << "Enter two numbers: "; cin >> a >> b;
  a = a - b;
  b = a + b;
  a = b - a;
  cout << a << b << "\n";
  return 0;
}