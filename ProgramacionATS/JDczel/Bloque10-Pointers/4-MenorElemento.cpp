#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Ingrese el numero de elementos: "; cin>>n;

  int array[n], *pArray = array;

  for(int i = 0; i < n; i++){
    cout<<"Digite el elemento de la posicion [" <<i <<"]: "; cin>>*pArray;
    pArray++;
  }
  pArray = array;
  int *menor = &*pArray;

  for(int i = 0; i < n; i++){
    if(*pArray < *menor)
      menor = &*pArray;
    pArray++;
  }
  cout<<"El menor elemento es: " <<*menor <<" y esta en la posicion: " <<menor;

  return 0;
}
