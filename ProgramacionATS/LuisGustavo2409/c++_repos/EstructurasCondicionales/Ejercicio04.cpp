/*
Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o negativo.
*/
#include <iostream>
using namespace std;
int main(){
  int a;
  cout << "Enter a number: "; cin >> a;
  if(a < 0)
    cout << "The number is negative\n";
  else if(a == 0)
    cout << "The number is zero\n";
  else 
    cout << "The number is positive\n";
  return 0;
}