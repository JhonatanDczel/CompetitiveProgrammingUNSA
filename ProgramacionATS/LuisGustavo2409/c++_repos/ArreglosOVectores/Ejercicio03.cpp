/*
Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números
y muestre en la salida estándar los números del vector con sus índices asociados.
*/
#include <iostream>
using namespace std;
int main(){
  cout << "Ingrese el tamaño del vector: ";
  int n; cin >> n;
  int nums[n]; 
  for(int i = 0; i < n; i++){
    cout << "Ingrese numero de la posicion: " << i << "\n";
    cin >> nums[i];
  }
  for(int i = 0; i < n; i++){
    cout << "Indice: " << i << "\tValor: " << nums[i] << "\n";
  }
  return 0;
}
