#include<iostream>

using namespace std;

int main(){
  double precio;
  cin>>precio;
  double precioIVA = precio * 0.18;
  cout<< "EL precio luego de pasar por impuestos es: " << precioIVA;
  return 0;
}
