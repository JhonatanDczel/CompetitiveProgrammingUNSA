#include<iostream>

using namespace std;

int **pM1, **pM2, filas, columnas;

void sumaMatriz(int **m1, int **m2, int filas, int columnas){
  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      *(*(m1 + i) + j) += *(*(m2 + i) + j);
    }
  }
}

int main(){
  cout<<"Digite el numero de filas: "; cin>>filas;
  cout<<"Digite el numero de columnas: "; cin>>columnas;

  pM1 = new int*[filas];
  for(int i = 0; i < filas; i++){
    pM1[i] = new int[columnas];
  }
  cout<<"Digite los elementos de la primera matriz: ";

  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      cout<<"Digite un numero: ";
      cin>>*(*(pM1 + i) + j);
    }
  }
  pM2 = new int*[columnas];
  for(int i = 0; i < filas; i++){
    pM2[i] = new int[columnas];
  }
  cout<<"Digite los elementos de la segunda matriz: ";

  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      cout<<"Digite un numero: ";
      cin>>*(*(pM2 + i) + j);
    }
  }

  sumaMatriz(pM1, pM2, filas, columnas);

  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      cout<<*(*(pM1 + i) + j) <<" ";
    }
    cout<<endl;
  }
  return 0;
}
