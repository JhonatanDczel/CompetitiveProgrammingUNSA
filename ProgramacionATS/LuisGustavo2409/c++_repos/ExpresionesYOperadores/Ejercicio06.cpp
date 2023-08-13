/*
Ejercicio 6: Escriba un programa que lea las tres notas de un alumno y calcule la nota
final media de dicho alumno.
*/
#include <iostream>
using namespace std;
int main(){
  double n1, n2, n3;
  cout << "Enter three notes: "; cin >> n1 >> n2 >> n3;
  cout << "The final note is: " << (n1 + n2 + n3) / 3 << "\n";
  return 0;
}