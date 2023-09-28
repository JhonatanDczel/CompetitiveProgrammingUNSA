#include<iostream>

using namespace std;

int main(){
  int a, b, c;
  int mayor = a;

  cin>>a >>b >>c;
  if(b > a && b > c){
    mayor = b;
  }
  else if(c > a && c > b){
    mayor = c;
  }
  cout<<"El mayor es: " <<mayor;

  return 0;
}
