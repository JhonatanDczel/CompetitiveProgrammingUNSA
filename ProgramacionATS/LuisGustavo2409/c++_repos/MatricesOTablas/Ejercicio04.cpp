/*
 * Ejercicio 4: Hacer una matriz preguntando al usuario el número de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla
en pantalla.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  int a, b;
  cout << "Digite el numero de filas y columnas de la matriz: "; cin >> a >> b;
  int matriz[a][b], copia[a][b];
  for(int i = 0; i < a; i++){
    for(int u = 0; u < b; u++){
      matriz[i][u] = rand();
      copia[i][u] = matriz[i][u];
      cout << copia[i][u] << "\t";
    }
    cout << "\n";
  }

  return 0;
}
