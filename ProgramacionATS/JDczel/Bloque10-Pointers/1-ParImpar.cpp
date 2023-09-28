#include<iostream>

using namespace std;

int main(){
  int numero, *pNumero;

  cout<<"Digite un numero"; cin>>numero;

  pNumero = &numero;

  if(*pNumero % 2 == 0)
    cout<<"El numero " <<*pNumero <<" es par" <<endl;
  else
    cout<<"El numero " <<*pNumero <<" no es par" << endl;
  cout<<"Direccion en memoria del numero: " <<pNumero;


  return 0;
}
