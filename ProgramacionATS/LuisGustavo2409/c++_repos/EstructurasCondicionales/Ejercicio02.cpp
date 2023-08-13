/*
Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el
mayor.
*/
#include <iostream>
using namespace std;
int main(){
  double a, b, c, mayor;
  cout << "Enter three numbers: "; cin >> a >> b >> c;
  mayor = a;
  if(a < b)
    mayor = b;
  if(a < c && c > b)
    mayor = c;
  cout << "The mayor is: " << mayor << "\n";
  return 0;
}