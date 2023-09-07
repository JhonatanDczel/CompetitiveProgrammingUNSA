/*
 * Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
*/
#include <iostream>
using namespace std;
int main(){
  int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int trans[3][3];
  for(int i = 0; i < 3; i++){
    for(int u = 0; u < 3; u++){
      trans[u][i] = matriz[i][u];
    }
  }
  for(int i = 0; i < 3; i++){
    for(int u = 0; u < 3; u++){
      cout << trans[i][u] << "\t"; 
    }
    cout << "\n";
  }
  return 0;
}
