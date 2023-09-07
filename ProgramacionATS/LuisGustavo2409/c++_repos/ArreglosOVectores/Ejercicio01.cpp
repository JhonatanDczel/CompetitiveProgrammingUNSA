/*
Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de
sus elementos.
*/
#include <iostream>
using namespace std;
int main(){
  int nums[] = {2, 3, 4, 5, 6};
  int suma = 0;
  for(int i = 0; i < 5; i++)
    suma += nums[i];
  cout << "La suma de los numeros del arreglo es: " << suma << "\n";
  return 0;
}