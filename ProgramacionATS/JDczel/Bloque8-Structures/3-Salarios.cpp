#include<iostream>

using namespace std;

struct Empleado{
  string nombre;
  int salario;
}emp[100];

int main(){
  int n;
  cout<<"Digita cuantos empleados son";
  cin>>n;
  int mayor = 0;
  for(int i = 0; i < n; i++){
    cout<<"Digite su nombre: "<<endl;
    cin>>emp[i].nombre;
    cout<<"Digite su salario: " <<endl;
    cin>>emp[i].salario;

    if(emp[i].salario > emp[mayor].salario)
      mayor = i;
  }

  cout<<endl <<"El empleado con mayor salario es:"<<endl;
  cout<<"Nombre: "<< emp[mayor].nombre <<endl;
  cout<< "Salario: "<<emp[mayor].salario<<endl;

  return 0;
}
