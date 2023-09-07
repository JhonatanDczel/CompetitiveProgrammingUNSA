/*
 * Ejercicio 8: Pedir al usuario 2 cadenas de caracteres de números, uno entero y el otro
real, convertirlos a sus respectivos valores y por ultimo sumarlos.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  string strent, strrea;
  int ent;
  double rea;
  cout << "Ingrese una cadena de numeros, uno entero y otro real: "; cin >> strent >> strrea;
  ent = stoi(strent);
  rea = stod(strrea);
  double sum = ent + rea;
  cout << "La suma es: " << sum << "\n";
  return 0;
}
