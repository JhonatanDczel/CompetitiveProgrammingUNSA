/*
Ejercicio 7: Escriba un programa que calcule el valor de: 1+2+3+...+n
*/
#include <iostream> 
using namespace std;
int main(){
  int sum = 0, n;
  cout << "Ingrese el numero n: "; cin >> n;
  for(int i = 1; i <= n; i++)
    sum += i;
  cout << "EL resultado es: " << sum << "\n";
  return 0;
}