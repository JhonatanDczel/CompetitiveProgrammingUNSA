/*
 * Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después
almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar
los elementos del primer vector seguido por los elementos del segundo vector. Muestre
el contenido del nuevo vector en la salida estándar.
*/
#include <iostream>
using namespace std;
int main() {
  char ri[] = {'R', 'i'}, calvo[] = {'c', 'a', 'l', 'v', 'o'};
  char ricalvo[size(ri) + size(calvo)];
  for(int i = 0; i < size(ri); i++)
    ricalvo[i] = ri[i];
  for(int i = size(ri); i < size(ricalvo); i++)
    ricalvo[i] = calvo[i - size(ri)];
  for(int i = 0; i < size(ricalvo); i++ )
    cout << ricalvo[i];
  cout << "\n";
  return 0;
}
