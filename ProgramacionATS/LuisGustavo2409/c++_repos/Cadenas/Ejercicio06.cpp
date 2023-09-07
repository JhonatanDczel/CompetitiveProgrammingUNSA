/*
 * Ejercicio 6: Convertir dos cadenas de minúsculas a MAYUSCULAS. Compararlas, y
decir si son iguales o no.
*/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char str1[40], str2[40];
  cout << "Ingrese dos cadenas separadas por un espacio: "; cin >> str1 >> str2;
  for(int i = 0; i < 39; i++){
    str1[i] = toupper(str1[i]);
    str2[i] = toupper(str2[i]);
  }
  if(strcmp(str1, str2) == 0)
    cout << "Son iguales\n";
  else
    cout << "No son iguales\n";
  return 0;
}
