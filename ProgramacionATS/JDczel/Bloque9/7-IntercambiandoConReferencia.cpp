#include<iostream>

using namespace std;

void intercambiar(int& num1, int& num2){
  int aux = num1;
  num1 = num2;
  num2 = aux;
}
int main(){
  int num1, num2;
  cout<<"Ingrese el primer numero: "; cin>>num1;
  cout<<"Ingrese el segundo numero: "; cin>>num2;

  intercambiar(num1, num2);

  cout<<"Ahora el nuevo valor del primer numero es: " <<num1 <<endl;
  cout<<"Ahora el nuevo valor del segundo numero es: " <<num2;

  return 0;
}
