/*
Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la función pow().
*/
#include <iostream>
using namespace std;
int main(){
  int x, y, savex;
  cout << "Ingrese los valores x y: "; cin >> x >> y;
  savex = x;
  for(int i = 1; i < y; i++)
    x *= savex;
  cout << "EL resultado es: " << x << "\n";
  return 0;
}