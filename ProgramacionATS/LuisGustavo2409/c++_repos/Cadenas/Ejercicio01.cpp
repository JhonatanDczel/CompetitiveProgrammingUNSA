/*
 * Ejercicio 1: Hacer un programa que pida al usuario que digite una cadena de
caracteres, luego verificar la longitud de la cadena, y si ésta supera a 10 caracteres
mostrarla en pantalla, caso contrario no mostrarla.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  string text;
  cout << "Digite un texto: "; getline(cin, text); 
  if(text.length() > 10)
    cout << text + "\n";
  return 0;
}  
