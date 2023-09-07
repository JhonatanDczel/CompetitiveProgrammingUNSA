/*
 * Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una
matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.
*/
#include <iostream>
using namespace std;
int main(){
  int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for(int i = 0; i < size(matriz); i++){
    for(int u = 0; u < size(matriz); u++){
      if(matriz[i][u] != matriz[u][i]){
      cout << "La matriz no es simetrica\n";
      return 0;
      }
    }
  }
  cout << "La matriz es simetrica\n";
  return 0;
}
