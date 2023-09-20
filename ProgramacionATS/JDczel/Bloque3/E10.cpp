#include<iostream>

using namespace std;

int main(){
  string enero = "Enero";
  string febrero = "Febrero";
  string marzo = "Marzo";
  string abril = "Abril";
  string mayo = "Mayo";
  string junio = "Junio";
  string julio = "Julio";
  string agosto = "Agosto";
  string setiembre = "Septiembre";
  string octubre = "Octubre";
  string noviembre = "Noviembre";
  string diciembre = "Diciembre";

  int mes;

  cout<<"Ingesa un numero de mes del anio: "; cin>> mes;

  switch(mes){
    case 1: cout<<enero; break;
    case 2: cout<<febrero; break;
    case 3: cout<<marzo; break;
    case 4: cout<<abril; break;
    case 5: cout<<mayo; break;
    case 6: cout<<junio; break;
    case 7: cout<<julio; break;
    case 8: cout<<agosto; break;
    case 9: cout<<setiembre; break;
    case 10: cout<<octubre; break;
    case 11: cout<<noviembre; break;
    case 12: cout<<diciembre; break;
    default: cout<<"No se ha ingresado un valor valido";
  }

  return 0;
}
