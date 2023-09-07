/*
 * Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de
3x3.
*/
#include <iostream>
using namespace std;
int main(){
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  for(int i = 0; i < 3; i++){
    for(int u = 0; u < 3; u++){
      int result = 0;
      for(int j = 0; j < 3; j++){
        result += a[i][j] * b[j][u]; 
      }   
      cout << result << "\t";
    }
    cout << "\n";
  }
  return 0;
}
