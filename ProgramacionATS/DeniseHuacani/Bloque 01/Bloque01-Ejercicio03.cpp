/*Realice un programa que lea de la entrada est�ndar los siguientes datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo car�cter.
Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida est�ndar.
*/
#include<iostream>
using namespace std;
int main(){
	int edad;char sexo[10];float altura;
	cout<<"Ingrese su edad: ";cin>>edad;
	cout<<"Ingrese su sexo : ";cin>>sexo;
	cout<<"Ingrese su altura en metros : ";cin>>altura;
	
	cout<<endl;
	cout<<"Edad : "<<edad<<endl;
	cout<<"Sexo : "<<sexo<<endl;
	cout<<"Altura : "<<altura<<endl;
	
	return 0 ;
}

