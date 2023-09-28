#include<iostream>

using namespace std;

int main(){
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int suma = 0;

  for(int i = 0; i < 9; i++){
    suma += array[i];
  }
  cout<<"La suma es: " <<suma;
  return 0;
}
