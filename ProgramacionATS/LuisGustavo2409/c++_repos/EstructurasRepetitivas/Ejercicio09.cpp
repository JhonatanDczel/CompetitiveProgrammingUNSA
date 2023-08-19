/*
Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
*/
#include <iostream>
using namespace std;
int main(){
  int n; 
  long prod = 1;
  cout << "Ingrese el numero n: "; cin >> n;
  for(int i = 1; i <= n; i++)
    prod *= i;
  cout << "El factorial es: " << prod << "\n";
  return 0;
}