#include<iostream>

using namespace std;

struct Nodo {
  int dato;
  Nodo *siguiente;
  
};

void agregarPila(Nodo *&pila, int dato){
  Nodo *nuevoNodo = new Nodo();
  nuevoNodo->dato = dato;
  nuevoNodo->siguiente = pila;
  pila = nuevoNodo;
}

void sacarPila(Nodo *&pila, int &n){
  Nodo *aux = pila;
  n = aux->dato;
  pila = aux->siguiente;
  delete aux;
}

void pedirDatos(Nodo *&pila){
  int dato;
  char rpt;
  do {
    cout<<"Digite un numero: ";
    cin>>dato;
    agregarPila(pila, dato);
    cout<<"\nDesea agregar otro numero a PILA (s/n)";
    cin>>rpt;
  } while((rpt == 's'));
}

int main(){
  Nodo *pila = NULL;
  int dato;
  pedirDatos(pila);
  cout<<"Sacando todos los elementos de PILA";
  while (pila != NULL) {
    sacarPila(pila, dato);
    if(pila != NULL)
      cout<<dato<<" , ";
    else {
      cout<<dato<<".";
    }
  }
  return 0;
}
