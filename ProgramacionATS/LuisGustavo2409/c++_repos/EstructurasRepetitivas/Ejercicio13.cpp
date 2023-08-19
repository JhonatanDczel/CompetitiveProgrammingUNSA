/*
Ejercicio 13: Hacer un que realice la serie fibonacci -> 1 1 2 3 5 8 13...n
*/
#include <iostream>
using namespace std;
int main(){
  int n, ant = 1, tant = 0;
  cout << "Ingrese la posicion n: "; cin >> n;
  for(int i = 0; i < n; i++){
    int sum = tant + ant;
    cout << ant << " ";
    tant = ant; 
    ant = sum;
  }
  cout << "\n";
  return 0;
}