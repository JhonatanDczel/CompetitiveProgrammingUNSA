#include<iostream>

using namespace std;

int main(){
  int f, c;
  cout<<"Ingrese el numero de filas: "; cin>>f;
  cout<<"Ingrese el numero de columnas : "; cin>>c;

  int matrix[f][c];

  for(int i = 0; i < f; i++){
    for(int j = 0; j < c; j++){
      cout<<"Por favor digita un numero: "; cin>>matrix[i][j];
    }
  }

  for(int i = 0; i < f; i++){
    for(int j = 0; j < c; j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<< " \n";
  }
  return 0;
}
