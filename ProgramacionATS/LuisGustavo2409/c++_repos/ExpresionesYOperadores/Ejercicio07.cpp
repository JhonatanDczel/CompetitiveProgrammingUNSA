/*
Ejercicio 7: La calificación final de un estudiante es el promedio de tres notas: la nota
de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota
de participación que cuenta el 10% restante. Escriba un programa que lea las tres notas
del alumno y escriba su nota final.
*/
#include <iostream>
using namespace std;
int main(){
  double n1, n2, n3;
  cout << "Enter three qualifications: "; cin >> n1 >> n2 >> n3;
  cout << "The final qualification is: " << n1 * 0.3 + n2 * 0.6 + n3 * 0.1 << "\n";
  return 0;
}