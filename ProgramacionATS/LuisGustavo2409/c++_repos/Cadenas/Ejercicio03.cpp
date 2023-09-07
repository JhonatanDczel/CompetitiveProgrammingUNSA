/*
 * Ejercicio 3: Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas
cadenas son iguales, en caso de no serlo, indicar cuál es mayor alfabéticamente.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  string cad1, cad2;
  cout << "Ingrese dos cadenas de texto separadas por un espacio: "; cin >> cad1 >> cad2;
  if(cad1.compare(cad2) == 0)
    cout << "Son iguales\n";
  else{
    if(cad1.compare(cad2) > 0)
      cout << "La primera cadena es mayor\n";
    else 
      cout << "La segunda cadena es mayor\n";
  }
  return 0;
}
