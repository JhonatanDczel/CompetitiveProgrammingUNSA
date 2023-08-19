/*
Ejercicio 14: En una clase de 5 alumnos se han realizado tres exámenes y se requiere
determinar el número de:
a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/
#include <iostream>
using namespace std;
int main(){
  int apr = 0, apr1 = 0, apru = 0, nota1, nota2, nota3;
  for(int i = 0; i < 5; i++){
    cout << "Ingrese las 3 notas del alumno " << i + 1 << ": "; cin >> nota1 >> nota2 >> nota3;
    if(nota1 > 10 && nota2 > 10 && nota3 > 10)
      apr++;
    if(nota1 > 10 || nota2 > 10 || nota3 > 10)
      apr1++;
    if(nota3 > 10)
      apru++;
  }
  cout << "Todos los examenes: " << apr << "\nAl menos un examen: " << apr1 << "\nUltimo examen: " << apru << "\n";
  return 0;
}