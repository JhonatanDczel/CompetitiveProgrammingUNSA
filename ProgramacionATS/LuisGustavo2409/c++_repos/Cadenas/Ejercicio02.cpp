/*
 * Ejercicio 2: Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y
copiar todo su contenido hacia otro arreglo de caracteres.
*/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char text[40], copia[40];
  cout << "Ingrese una cadena de caracteres: "; cin >> text;
  strcpy(copia,text); 
  cout << "Una copia de su cadena: " << copia << "\n"; 
  return 0;
}
