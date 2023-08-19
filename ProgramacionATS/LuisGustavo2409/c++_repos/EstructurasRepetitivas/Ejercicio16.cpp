/*
Ejercicio 16: Realice un programa que calcule la descomposición en factores primos
de un número entero. Por ejemplo: 20 = 2*2*5.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n;
  bool esPrimo = true;
  string result = "";
  cout << "Ingrese un numero: "; cin >> n;
  int myN = n;
  for(int i = 2; i <= n && n != 1; i++){
    for(int j = 2; j <= sqrt(i); j++){
      if(i % j == 0){
        esPrimo = false;
        break;
      }
      esPrimo = true;
    }
    while(esPrimo && n % i == 0){
      n /= i;
      result += to_string(i) + " * ";
    }
  }
  cout << myN << " = " << result.substr(0, result.length() - 3) + "\n";
  return 0;
}