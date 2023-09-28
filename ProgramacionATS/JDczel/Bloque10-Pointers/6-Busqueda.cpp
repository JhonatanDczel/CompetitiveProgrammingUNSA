#include<iostream>

using namespace std;


int busqueda(int *arreglo, int n, int x){
  for(int i = 0; i < n; i++){
    if(*(arreglo + i) == x)
      return i;
  }
  return 0;
}

int main(){
  int n;
  cout<<"Digite el numero de elementos que tendra el arreglo";
  cin>>n;
  int *arreglo = new int[n];
  for(int i = 0; i < n; i++){
    cout<<"Digite el numero de la posicion " <<i + 1;
    cin>>*(arreglo + i);
  }
  int x;
  cout<<"Busqueda lineal, ingrese un numero para buscar: ";
  cin>>x;
  cout<<"Se ha encontrado " <<*(arreglo + busqueda(arreglo, n, x)) <<" en la direccion de memoria: " <<(arreglo + busqueda(arreglo, n, x));
  return 0;
}
