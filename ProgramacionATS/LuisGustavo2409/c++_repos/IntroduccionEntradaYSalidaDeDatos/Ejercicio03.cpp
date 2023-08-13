/*
Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos
de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>
using namespace std;
int main(){
  int age;
  char sexo;
  double heigth;
  cout << "Enter age: "; cin >> age;
  cout << "Enter sexo: "; cin >> sexo;
  cout << "Enter heigth: "; cin >> heigth;
  cout << "Your age is: " << age << "\n";
  cout << "Your sexo is: " << sexo << "\n";
  cout <<  "Your heigth is: " << heigth << "\n";

  return 0;
}