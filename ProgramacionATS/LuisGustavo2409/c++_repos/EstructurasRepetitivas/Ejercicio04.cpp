/*
Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule
la temperatura media del día, la temperatura más alta y la más baja.
*/
#include <iostream>
#include <limits>
using namespace std;
int main(){
  int hora = 0, sum = 0, mayor = INT32_MIN, menor = INT32_MAX;
  while(hora <= 24){
    int t;
    cout << "Ingrese la temperatura a las " << hora << ":00 horas: "; cin >> t;
    sum += t;
    if(t < menor)
      menor = t;
    if(t > mayor)
      mayor = t;
    hora += 4;
  }
  cout << "El promedio de temperatura es: " << sum / 6.0;
  cout << "\nLa mayor temperatura alcanzada es: " << mayor;
  cout << "\nLa menor temperatura alcanzada es: " << menor << "\n";
  return 0;
}