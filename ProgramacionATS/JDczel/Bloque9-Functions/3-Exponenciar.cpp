#include<iostream>

using namespace std;

void funpot(int num, int exponente){
  int potencia = 1;
  for(int i = 0; i < exponente; i++){
    potencia *= num;
  }
  cout<<potencia;
}
int main(){
  int numero, exponente;
  cout<<"Ingresa el numero que deseas evaluar: "; cin>>numero;
  cout<<"Ingresa el exponente positivo: "; cin>>exponente;
  funpot(numero, exponente);
  return 0;
}
