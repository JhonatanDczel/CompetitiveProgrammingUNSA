/*
Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se
introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida
estándar el número de valores mayores que cero leídos.
*/
#include <iostream>
using namespace std;
int main(){
  int n, posit = 0; 
  string s = "";
  do{
    cout << "Ingresa un numero: "; cin >> n;
    if(n > 0){
      posit++;
      s += to_string(n) + ", ";
    }
  }while(n != 0);
  if(!s.empty())
    cout << "Los numeros postivos son: " + s.substr(0, s.length() - 2) + "\nContandolos: " << posit << "\n";
  else
    cout << "No ingreso numeros positivos\n";
  return 0;
}