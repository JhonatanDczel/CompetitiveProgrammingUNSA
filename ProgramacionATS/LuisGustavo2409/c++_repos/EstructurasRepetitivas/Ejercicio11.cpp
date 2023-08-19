/*
Ejercicio 11: Escriba un programa que calcule el valor de: 21+22+23+...+2n
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n, sum = 0;
  cout << "Ingrese el numero n: "; cin >> n;
  for(int i = 1; i <= n; i++)
    sum += pow(2, i);
  cout << "El resultado es: " << sum << "\n";
  return 0;
}