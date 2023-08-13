// (-b +- sqrt(b * b - 4 * a * c)) / 2 * a
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double a, b, c;
  cout << "Ingrese los coeficientes de la ecuacion cuadratica: "; cin >> a >> b >> c;
  cout << "La primera raiz es: " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << "\n";
  cout << "La segunda raiz es: " << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << "\n";
  return 0;
}