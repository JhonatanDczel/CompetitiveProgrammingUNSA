/*
Ejercicio 8: Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
*/
#include <iostream>
using namespace std;
int main(){
  int sum = 0, n;
  cout << "Ingrese la posicion n del numero impar: "; cin >> n;
  for(int i = 1; i <= n; i++)
    sum += 2 * i - 1;
  cout << "El resultado es: " << sum << "\n";
  return 0;
}