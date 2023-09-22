#include<iostream>

using namespace std;

struct corredor{
  char nombre[30];
  int edad;
  char sexo;
  char club[30];
}corredor;

int main(){
  cout<<"Digita el nombre:";
  cin.getline(corredor.nombre, 30, '\n');
  cout<<"Digita su sexo:";
  cin>>corredor.sexo;
  cin.ignore();
  cout<<"Digita la edad:";
  cin>>corredor.edad;
  cin.ignore();
  cout<<"Digita el club:";
  cin.getline(corredor.club, 30, '\n');
  string categoria = "Veterano";

  if(corredor.edad <= 18)
    categoria = "Juvenil";
  else if(corredor.edad <= 40)
    categoria = "Senior";

  cout<<"Corredor - datos\n" <<corredor.nombre <<"\n" <<corredor.edad <<"\n" <<corredor.club <<"\n" <<categoria;
  return 0;
}

