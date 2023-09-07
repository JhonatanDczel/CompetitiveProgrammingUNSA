/*: Ejecute el programa del ejercicio anterior con entradas erróneas y observe
los resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un
dato de tipo entero

*/
#include<iostream>
using namespace std;
int main(){
	int edad;
	char sexo;
	double altura;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su sexo F/M: ";
	cin>>sexo;
	cout<<"Ingrese su altura : ";
	cin>>altura;
	cout<<endl;
	cout<<"Edad : "<<edad<<endl;
	cout<<"Sexo : "<<sexo<<endl;
	cout<<"Altura : "<<altura<<endl;
	
	return 0 ;
}
