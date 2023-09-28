#include<iostream>

using namespace std;

int main(){
  int a, b;
  cin>>a >>b;
  int mayor = a;
  if(b > a){
    mayor = b;
  }
  cout<< "El mayor es: " <<mayor;
  return 0;
}
