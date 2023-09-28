#include<iostream>

using namespace std;

struct alumno{
  string nombre;
  int edad;
  int promedio;
}alumnos[3], *alumno = alumnos;
int main(){
  for(int i = 0; i < 3; i++){
    cout<<"\nEstudiante " <<i + 1<< ":" <<endl;
    cout<<"Ingrese el nombre: "; cin>>(alumno + i)->nombre;
    cout<<"Ingrese la edad: "; cin>>(alumno + i)->edad;
    cout<<"Ingrese el promedio: "; cin>>(alumno + i)->promedio;
  }
  return 0;
}
