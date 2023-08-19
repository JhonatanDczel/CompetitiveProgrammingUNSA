/*
Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6...n
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n, sum = 0;
  cout << "Ingrese el numero n: "; cin >> n;
  for(int i = 1; i <= n; i++)
    sum += pow(-1, i + 1) * i;
  cout << "El resultado es: " << sum << "\n"; 
  return 0;
}