/*
Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos es el
mayor.
*/
#include <iostream>
using namespace std;
int main(){
  double a, b, mayor;
  cout << "Entre two numbers: "; cin >> a >> b;
  mayor = a;
  if(a < b)
    mayor = b;
  cout << "The mayor is: " << mayor << "\n"; 
  return 0;
}