/*
 * Ejercicio 3: Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar
todo su contenido hacia otra matriz.
*/
#include <iostream>
using namespace std;
int main(){
  int matriz[2][2] = {{1, 2}, {3, 4}}, copia[2][2];
  for(int i = 0; i < 2; i++){
    for(int u = 0; u < 2; u++){
      copia[i][u] = matriz[i][u];
      cout << copia[i][u] << "\n";
    }
  }
  return 0;
}
