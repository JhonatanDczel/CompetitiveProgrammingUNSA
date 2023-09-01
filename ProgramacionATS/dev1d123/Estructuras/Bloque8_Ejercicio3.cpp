#include <iostream>
#include <limits>
using namespace std;
struct Empleado{
	char nombre[50];
	double salario;	
};


int main(){
	Empleado emp[100];
	int n;
	double maxS = numeric_limits<int>::min();;
	double minS = numeric_limits<int>::max();
	int a,b;
	
	cout<<"Ingrese el numero de empleados "<<endl;
	cin>>n;
	cin.ignore();
	for(int i = 1; i <=n; i++){
		cout<<"Ingrese el nombre del empleado "<<i<<endl;
		
		cin.getline(emp[i-1].nombre, 50,'\n');
		
		cout<<"Digite su salario "<<endl;
		cin>>emp[i-1].salario;
		cin.ignore();
		if(emp[i-1].salario >=  maxS){
			maxS = emp[i-1].salario;
			a = i-1;
		}
		if(emp[i-1].salario<=minS){
			minS = emp[i-1].salario;
			b = i-1;
		}
		cout<<endl;
	}
	cout<<"Maximo salario "<<endl;
	cout<<"Nombre: "<<emp[a].nombre<<endl;
	cout<<"Salario: "<<emp[a].salario<<endl;
	cout<<"Minimo salario "<<endl;
	cout<<"Nombre: "<<emp[b].nombre<<endl;
	cout<<"Salario: "<<emp[b].salario<<endl;

	
	
	return 0;
}