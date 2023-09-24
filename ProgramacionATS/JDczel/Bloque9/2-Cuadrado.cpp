#include<iostream>

using namespace std;

template <class TIPOD>

void alCuadrado(TIPOD num){
  cout<<"Ese numero al cuadrado es: " <<num * num <<endl;
}

int main(){
  alCuadrado(34.5);
  return 0;
}
