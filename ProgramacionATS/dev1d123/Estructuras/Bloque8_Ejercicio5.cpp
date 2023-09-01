#include <iostream>
using namespace std;
struct Promedio{
	double nota1,nota2,nota3;
};
struct Alumno{
	char nombre[50];
	char sexo[10];
	int edad;
	Promedio prom;
};	
int main(){
	Alumno a;
	cout<<"Ingrese el nombre "<<endl;
	cin.getline(a.nombre,50,'\n');
	cout<<"Ingrese el sexo "<<endl;	
	cin>>a.sexo;
	cout<<"Ingrese la edad "<<endl;
	cin>>a.edad;
	cout<<"Ingrese la nota 1 "<<endl;
	cin>>a.prom.nota1;
	cout<<"Ingrese la nota 2 "<<endl;
	cin>>a.prom.nota2;
	cout<<"Ingrese la nota 3 "<<endl;
	cin>>a.prom.nota3;
	double pr = (a.prom.nota1 + a.prom.nota2 + a.prom.nota3)/3;
	
	cout<<"Nombre: "<<a.nombre<<endl;
	cout<<"Sexo: "<<a.sexo<<endl;
	cout<<"Edad: "<<a.edad<<endl;
	cout<<"Promedio: "<<pr<<endl;

	return 0;
}