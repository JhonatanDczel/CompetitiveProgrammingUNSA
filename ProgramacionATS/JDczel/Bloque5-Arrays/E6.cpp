#include<iostream>

using namespace std;

int main(){
  int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int suma;

  for(int i = 0; i < 9; i++){
    suma += vector[i];
  }
  for(int i = 0; i < 9; i++){
    if(vector[i] == suma - vector[i]){
      cout<<"Se encontro que " <<vector[i] <<" es la suma de los otros numeros";
    }
  }
  cout<<"No se han encontrado numeros que cumplan con tal definicion";
  return 0;
}
