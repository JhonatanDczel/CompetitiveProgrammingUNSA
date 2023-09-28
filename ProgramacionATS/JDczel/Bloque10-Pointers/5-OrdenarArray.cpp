#include<iostream>

using namespace std;

void ordenar(int *pArray, int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - 1; j++){
      if(*(pArray + j) > *(pArray + j + 1)){
        int aux = *(pArray + j);
        *(pArray + j) = *(pArray + j + 1);
        *(pArray + j + 1) = aux;
      }
    }
  }
}

int main(){
  int n;
  cout<<"Digite el numero de elementos que tendra el arreglo";
  cin>>n;
  int *elemento;
  elemento = new int[n];
  for(int i = 0; i < n; i++){
    cout<<"Ingrese el elemento " <<i + 1<<endl;
    cin>>*(elemento + i);
  }
  ordenar(elemento, n);

  for(int i = 0; i < n; i++){
    cout<<*(elemento + i)<<endl;
  }

  return 0;
}
