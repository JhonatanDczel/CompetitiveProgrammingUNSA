/*
Ejercicio 9: Cambiar un número entero con el mismo valor pero en romanos.
*/
#include <iostream>
using namespace std;
int main(){
  int n, u, d, c, m;
  cout << "Ingrese un numero positivo: "; cin >> n;
  string result = "";
  u = n % 10; n /= 10;
  d = n % 10; n /= 10;
  c = n % 10; n /= 10;
  m = n;
  switch(m){
    case 1: result += "M"; break;
    case 2: result += "MM"; break;
    case 3: result += "MMM"; break;
  }
  switch(c){
    case 1: result += "C"; break;
    case 2: result += "CC"; break;
    case 3: result += "CCC"; break;
    case 4: result += "CD"; break;
    case 5: result += "D"; break;
    case 6: result += "DC"; break;
    case 7: result += "DCC"; break;
    case 8: result += "DCCC"; break;
    case 9: result += "CM"; break;
  }
  switch(d){
    case 1: result += "X"; break;
    case 2: result += "XX"; break;
    case 3: result += "XXX"; break;
    case 4: result += "XL"; break;
    case 5: result += "L"; break;
    case 6: result += "LX"; break;
    case 7: result += "LXX"; break;
    case 8: result += "LXXX"; break;
    case 9: result += "XC"; break;
  }
  switch(u){
    case 1: result += "I"; break;
    case 2: result += "II"; break;
    case 3: result += "III"; break;
    case 4: result += "IV"; break;
    case 5: result += "V"; break;
    case 6: result += "VI"; break;
    case 7: result += "VII"; break;
    case 8: result += "VIII"; break;
    case 9: result += "IX"; break;
  }
  cout << result + "\n";
  return 0;
}