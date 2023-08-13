/*
Ejercicio 3: Realice un programa que calcule y muestre en la salida estándar la suma
de los cuadrados de los 10 primeros enteros mayores que cero.
*/
#include <iostream>
using namespace std;
int main(){
  int sum = 0;
  for(int n = 1; n <= 10; n++){
    cout << n << " x " << n << " = " << n * n << "\n";
    sum += n * n;
  }
  cout << "La suma es: " << sum << "\n";
  return 0;
}