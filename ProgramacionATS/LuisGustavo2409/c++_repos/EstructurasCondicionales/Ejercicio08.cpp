/*
Ejercicio 8: Escribe un programa que lea de la entrada estándar tres números. Después
debe leer un cuarto número e indicar si el número coincide con alguno de los
introducidos con anterioridad.
*/
#include <iostream>
using namespace std;
int main(){
  double a, b, c, repeat;
  cout << "Ingrese tres numeros: "; cin >> a >> b >> c;
  cout << "Ingrese el cuarto numero: "; cin >> repeat;
  if(repeat == a)
    cout << "El numero coincide con el primero que ingresaste\n";
  else if(repeat == b)
    cout << "El numero coincide con el segundo que ingresaste\n";
  else if(repeat == c)
    cout << "El numero coincide con el tercero que ingresaste\n";
  else
    cout << "El numero no coincide con ninguno de los que ingresaste con anterioridad\n";
  return 0;
}