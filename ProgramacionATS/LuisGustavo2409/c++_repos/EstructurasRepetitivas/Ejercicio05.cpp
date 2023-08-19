/*
Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un
valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma
de los valores mayores a 0 introducidos.
*/
#include <iostream>
using namespace std;
int main(){
  int n, sum = 0;
  do{
    cout << "Ingrese un numero: "; cin >> n;
    if(n > 0)
      sum += n;
  }while((n < 20 || n > 30) && n != 0);
  cout << sum << "\n";
  return 0;
}