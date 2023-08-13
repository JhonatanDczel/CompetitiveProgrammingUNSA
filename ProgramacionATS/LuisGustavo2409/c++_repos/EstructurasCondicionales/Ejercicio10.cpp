/*
Ejercicio 10: Mostrar los meses del año, pidiéndole al usuario un número entre (1-12),
y mostrar el mes al que corresponde.
*/
#include <iostream>
using namespace std;
int main(){
  int m;
  cout << "Ingrese un numero del 1 al 12 para indicarle el mes en el que se encuentra: "; cin >> m;
  switch(m){
    case 1: cout << "Es Enero\n"; break;
    case 2: cout << "Es Febrero\n"; break;
    case 3: cout << "Es Marzo\n"; break;
    case 4: cout << "Es Abril\n"; break;
    case 5: cout << "Es Mayo\n"; break;
    case 6: cout << "Es Junio\n"; break;
    case 7: cout << "Es Julio\n"; break;
    case 8: cout << "Es Agosto\n"; break;
    case 9: cout << "Es Setiembre\n"; break;
    case 10: cout << "Es Octubre\n"; break;
    case 11: cout << "Es Noviembre\n"; break;
    case 12: cout << "Es Diciembre\n"; break;
    default: cout << "No es un numero adecuado\n"; break;
  }
  return 0; 
}