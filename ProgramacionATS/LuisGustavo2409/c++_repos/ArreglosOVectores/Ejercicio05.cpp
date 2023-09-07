/*
 * Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros
y determine el mayor elemento del vector.
*/
#include <iostream>
#include <climits>
using namespace std;
int main(){
  int n;
  cout << "Ingrese el tamaño del vector: "; cin >> n;
  int nums[n], mayor = INT_MIN;
  for(int i = 0; i < n; i++){
    cout << "Ingrese el numero de la posicion " << i << "\n";
    cin >> nums[i];
    if(mayor < nums[i])
      mayor = nums[i];
  }
  cout << "El mayor es: " << mayor << "\n";
  return 0;
}
