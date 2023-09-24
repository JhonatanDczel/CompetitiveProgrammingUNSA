#include<iostream>

using namespace std;

void cambio(int total, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
  cien = total / 100; total %= 100;
  cincuenta = total / 50; total %= 50;
  veinte = total / 20; total %= 20;
  diez = total / 10; total %= 10;
  cinco = total / 5;
  uno = total % 5;
}
int main(){
  int dolares, cien, cincuenta, veinte, diez, cinco, uno;

  cout<<"Ingrese su camtidad en dolares: "; cin>>dolares;

  cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);

  cout<<"Esta es el mejor cambio a billetes: " <<endl;
  cout<<"Billetes de 100: " <<cien <<endl;
  cout<<"Billetes de 50: " <<cincuenta<<endl;
  cout<<"Billetes de 20: " <<veinte<<endl;
  cout<<"Billetes de 10: " <<diez<<endl;
  cout<<"Billetes de 5: " <<cinco<<endl;
  cout<<"Billetes de 1: " <<uno<<endl;
  return 0;
}
