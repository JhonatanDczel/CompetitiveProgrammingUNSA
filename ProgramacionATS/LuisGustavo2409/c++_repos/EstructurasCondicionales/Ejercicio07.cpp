/*
Ejercicio 7: Escriba un programa que solicite una edad (un entero) e indique en la salida
estándar si la edad introducida está en el rango [18-25].
*/
#include <iostream>
using namespace std;
int main(){
  int age;
  cout << "Ingrese su edad: "; cin >> age;
  if(age < 0)
    cout << "Esa no es una edad adecuada\n";
  else if(18 <= age && age <= 25)
    cout << "La edad esta en el rango de 18 a 25\n";
  else
    cout << "La edad no esta en el rango de 18 a 25\n";
  return 0;
}