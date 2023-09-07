/*
 * Ejercicio 5: Hacer un programa que determine si una palabra es palíndroma.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
  string pal;
  cout << "Ingrese una palabra: "; cin >> pal;
  for(int i = 0; i < pal.length() / 2; i++){
    if(pal[i] != pal[pal.length() - i - 1]){
      cout << "No es palindroma\n";
      return 0;
    }
  }
  cout << "Si es palindroma\n";
  return 0;
}
