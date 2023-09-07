/*
 * Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número
de filas y columnas, Posteriormente mostrar la matriz en pantalla.
*/
#include <iostream>
using namespace std;
int main(){
  int a, b;
  cout << "Digite el numero de filas: "; cin >> a;
  cout << "Digite el numero de columnas: "; cin >> b;
  int matriz[a][b];
  for(int i = 0; i < a; i++){
    for(int u = 0; u < b; u++){
      cout << "Ingrese el elemento de la fila " << i << " columna " << u << ": "; cin >> matriz[i][u];
    }
  }
  for(int i = 0; i < a; i++){
    for(int u = 0; u < b; u++){
      cout << matriz[i][u] << "\t";
    }
    cout << "\n";
  }  
  return 0;
}
