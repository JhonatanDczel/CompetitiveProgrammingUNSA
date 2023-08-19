/*
Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de
factoriales).
*/
#include <iostream>
using namespace std;
int main(){
  int n;
  long result = 0;
  cout << "Ingrese el numero n: "; cin >> n;
  for(int i = 1; i <= n; i++){
    long fact = 1;
    for(int j = 1; j <= i; j++)
      fact *= j;
    result += fact;
  }
  cout << "El resultado es: " << result << "\n"; 
  return 0;
}