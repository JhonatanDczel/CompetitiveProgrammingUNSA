/*
 * Ejercicio 9: Realice un programa que lea una cadena de caracteres de la entrada
estándar y muestre en la salida estándar cuántas ocurrencias de cada vocal existen en
la cadena.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  string text;
  cout << "Ingrese un texto: "; getline(cin, text);
  for(int i = 0; i < text.length(); i++){
    text[i] = toupper(text[i]);
    switch(text[i]){
      case 'A':
        a++; break;
      case 'E':
        e++; break;
      case 'I':
        i++; break;
      case 'O':
        o++; break;
      case 'U':
        u++; break;
      default:
        break;
    }
  }
  cout << "Cada vocal y su ocurrencia:\nA: " << a << "\nE: " << e << "\nI: " << i << "\nO: " << o << "\nU: " << u << "\n";
  return 0;
}
