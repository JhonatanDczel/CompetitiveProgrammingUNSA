/*
 * Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro
arreglo, multiplicado por 2 y muestre el segundo arreglo.
*/
#include <iostream>
using namespace std;
int main(){
  int nums[5], doubNums[5];
  for(int i = 0; i < 5; i++){
    cout << "Ingrese elemento del arreglo: "; cin >> nums[i];
    doubNums[i] = 2 * nums[i];
  }
  for(int n : doubNums)
    cout << n <<"\n";
  return 0;
}
