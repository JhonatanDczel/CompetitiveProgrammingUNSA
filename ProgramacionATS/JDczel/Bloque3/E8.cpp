#include<iostream>

using namespace std;

int main(){
  int a, b, c, d;
  cin>>a >>b >>c;
  cout<<"Ingrese un numero mas: ";
  cin>>d;
  if(d == a || d == b || d == c){
    cout<<"El numero ingresado ya esta dentro de la lista inicial";
  }else{
    cout<<"El numero ingresado no se encuentra dentro de la lista inicial";
  }
  return 0;
}
