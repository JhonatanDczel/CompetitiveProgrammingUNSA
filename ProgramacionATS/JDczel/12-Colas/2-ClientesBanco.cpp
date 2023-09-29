#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo{
 int dato;
 Nodo *siguiente;
};
void menu();
void insertarcola(Nodo *&frente,Nodo *&fin,int);
void eliminarcola(Nodo *&frente,Nodo *&fin);
void mostrarcola(Nodo *);
void buscarcola(Nodo *,int,bool &);
void actualizarcola(Nodo*,int,bool &);

int main(){

 menu();
 
 return 0;
}

void menu(){
 Nodo *frente = NULL;
 Nodo *fin = NULL;
 bool veri = false;
 
 int dato,opc,i;
 dato = 0, opc = 0,i=1;
 
 do{
  cout<<"Direccion de el primer elemento : "<<frente<<endl; 
  cout<<"Direccion el ultimo elemento : "<<fin<<endl<<endl;
  cout<<"\n\nMENU DE COLAS \n\n";
  cout<<"1.-Insertar cola\n";
  cout<<"2.-Eliminar cola\n";
  cout<<"3.-Mostrar cola\n";
  cout<<"4.-Buscar elemento de cola\n";
  cout<<"5.-Modificar elemento de cola : \n";
  cout<<"6.-Salir";
  cout<<"\n\nEscribe la opcion requerida : "; cin>>opc;
  cout<<"\n\n";
 switch (opc){ //Inicio de Switch
  case 1:
   cout<<"Escribe el dato a insertar : "; cin>>dato;
   insertarcola(frente,fin,dato);
   cout<<"El elemento se guardo en la direccion : "<<fin;
  break;
  
  case 2:
   cout<<"Dijite cuantos elementos va a eliminar de la cola : "; cin>>dato;
   cout<<"\n\nNumero eliminados : \n\n";
   while(frente !=NULL && i<=dato){
    eliminarcola(frente,fin);
    i++;
   }
   i=1;
  break;
  
  case 3:
   cout<<"\n\nElementos de la cola : \n\n";
   mostrarcola(frente);
   
  break;
  
  case 4:
  
   cout<<"\n\nEscribe el dato a buscar de la cola : "; cin>>dato;
   buscarcola(frente,dato,veri);
  break;
  
  case 5:
   cout<<"\n\nEscribe el dato que quieres modificar : "; cin>>dato;
   actualizarcola(frente,dato,veri);
  break;
  
  case 6:
   if(frente!=NULL){
    cout<<"\nExisten elementos en la pila !!, Vamos a eliminarlos\n";
    cout<<"Elementos eliminados : \n\n";
    while(frente!=NULL){
     eliminarcola(frente,fin);
    }
    
   }
   if(frente==NULL){
    cout<<"PILA VACIA, PRESIONE ENTER PARA SALIR";
   }
  break;
  
 } //Fin de Switch
 getch();
 system("cls");
 }while(opc!=6);
}//Fin de Funcion Menu;


void insertarcola(Nodo *&frente,Nodo *&fin,int n){
 Nodo *nuevo_nodo = new Nodo();
 nuevo_nodo->dato = n;
 nuevo_nodo->siguiente = NULL;
 
 if(frente==NULL){
  frente = nuevo_nodo;
 }
 else{
  fin->siguiente = nuevo_nodo;
 }
 fin = nuevo_nodo;
}

void eliminarcola(Nodo *&frente,Nodo *&fin){
  Nodo *aux = frente;
 
  cout<<"Numero : "<<aux->dato<<" Direccion : "<<aux<<endl;
 
  frente = aux->siguiente;
 
  if(frente==NULL){
   fin = NULL;
  }
  delete aux;
}

void mostrarcola(Nodo *aux){
 while(aux!=NULL){
  cout<<"Numero : "<<aux->dato<<" Direccion : "<<aux<<endl;
  aux = aux->siguiente;
 }
}

void buscarcola(Nodo *aux,int n,bool &veri){
 
 while(aux!=NULL){
  if(n == aux->dato){
   veri = true;
   cout<<"Dato encontrado en la direccion : "<<aux<<endl;
   break;
  }
  aux = aux->siguiente;
 }
 if(veri==false){
  cout<<"\nDato no encontrado, la cola puede estar vacia o no existe el elemento en ella"<<endl;
 }
 veri = false;
 aux = NULL;
 delete aux;
}

void actualizarcola(Nodo *aux,int n,bool &veri){
 while(aux!=NULL){
  if(n == aux->dato){
   veri = true;
   cout<<"Elemento encontrado en la direccion : "<<aux<<endl;
   cout<<"Escribe el elemento nuevo : "; cin>>n;
   aux->dato = n;
   cout<<"Listo elemento actualizado!!"<<endl;
   break;
  }
  aux = aux->siguiente;
 }
 if(veri==false){
  cout<<"\nDato no encontrado, la cola puede estar vacia o no existe el elemento en ella"<<endl;
 }
 veri = false;
 aux = NULL;
 delete aux;
}
