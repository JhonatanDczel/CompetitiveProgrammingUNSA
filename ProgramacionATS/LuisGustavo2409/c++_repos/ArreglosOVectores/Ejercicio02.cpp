/*
Ejercicio 2: Escribe un programa que defina un vector de números y calcule la
multiplicación acumulada de sus elementos.
*/
#include <iostream>
using namespace std;
int main(){
  int nums[] = {1, 2, 3, 4, 5}, mult = 1;
  for(int n : nums){
    mult *= n;
  }
  cout << mult << "\n";
  return 0;
}
