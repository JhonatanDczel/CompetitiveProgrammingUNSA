/*
 * Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de
3x3.
*/
#include <iostream>
using namespace std;
int main(){
  int ma[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
  int mb[3][3] = {{2, 2, 2}, {2, 2, 2}, {2, 2, 2}};
  for(int i = 0; i < 3; i++){
    for(int u = 0; u < 3; u++){
      cout << ma[i][u] + mb[i][u] << "\t";
    }
    cout << "\n";
  }
  return 0;
}
