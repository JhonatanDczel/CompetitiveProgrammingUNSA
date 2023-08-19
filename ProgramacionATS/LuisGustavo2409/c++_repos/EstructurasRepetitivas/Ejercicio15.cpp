/*
Ejercicio 15: Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango
[1-100], e indicarle al usuario si el número que digito es menor o mayor al número
aleatorio, así hasta que lo adivine. Y por ultimo mostrarle el número de intentos que le
llevo.
*/
#include <iostream>
#include <random>
using namespace std;
int main(){
  int n, adiv, i = 0;
  do{
    n = random();
  }while(n < 1 || n > 100);
  cout << "Intenta adivinar el numero!\n";
  do{
    cout << "Ingresa tu numero: "; cin >> adiv;
    if(n > adiv)
      cout << "El numero es mayor\n";
    if(n < adiv)
      cout << "El numero es menor\n";
    i++;
  }while(adiv != n);
  cout << "Felicidades! Lo adivinaste en " << i << " intentos\n";
  return 0;
}