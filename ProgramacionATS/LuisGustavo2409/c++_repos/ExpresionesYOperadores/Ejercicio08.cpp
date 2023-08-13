/*
Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos de un
triángulo rectángulo y escriba en la salida estándar su hipotenusa.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double c1, c2;
  cout << "Ingrese catetos: "; cin >> c1 >> c2;
  cout << "La hipotenusa es: " << sqrt(c1 * c1 + c2 * c2) << "\n";
  return 0;
}