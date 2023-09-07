/*
 * Ejercicio 7: Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por
la letra A, convertir su nombre a minúsculas, caso contrario no convertirlo.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
  string name;
  cout << "Ingresa tu nombre en mayusculas: "; cin >> name;
  if(name[0] == 'A'){
    for(int i = 0; i < name.length(); i++)
      name[i] = tolower(name[i]);
    cout << name << "\n";
  }
  return 0;
}
