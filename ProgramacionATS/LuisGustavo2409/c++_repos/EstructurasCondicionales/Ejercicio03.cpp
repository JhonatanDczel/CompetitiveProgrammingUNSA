/*
Ejercicio 3: Realice un programa que lea un valor entero y determine si se trata de un
número par o impar.
*/
#include <iostream>
using namespace std;
int main(){
  int a;
  cout << "Enter a number: "; cin >> a;
  if(a % 2 == 0)
    cout << "The number is pair\n";
  else
    cout << "The number is odd\n";
  return 0;
}