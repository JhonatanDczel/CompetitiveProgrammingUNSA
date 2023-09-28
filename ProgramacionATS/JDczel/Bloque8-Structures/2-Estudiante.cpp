#include<iostream>

using namespace std;

struct alumno{
 string nombre;
 int edad;
 int promedio;
}alumno[3];
int main(){
  for(int i = 0; i < 3; i++){
    cout<<"Digite el nombre del alumno " << i+1 << ":" <<endl;
    cin>>alumno[i].nombre;
    cout<<"Digite la edad del alumno " << i+1 << ":" <<endl;
    cin>>alumno[i].edad;
    cout<<"Digite el promedio del alumno " << i+1 << ":" <<endl;
    cin>>alumno[i].promedio;
    cout<<endl;
  }
  int mayor = 0;
  for(int i = 0; i < 3; i++){
    if(alumno[i].promedio > alumno[mayor].promedio)
      mayor = i;
  }

  cout<<"Datos del mejor promedio"<<endl;
  cout<<"Nombre: " <<alumno[mayor].nombre <<endl;
  cout<<"Edad: " <<alumno[mayor].edad <<endl;
  cout<<"Promedio: " <<alumno[mayor].promedio <<endl;

  return 0;
}
