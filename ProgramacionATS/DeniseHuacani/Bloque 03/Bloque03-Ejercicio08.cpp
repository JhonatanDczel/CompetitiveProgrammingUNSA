/*8: Escribe un programa que lea de la entrada estándar tres números. Después
debe leer un cuarto número e indicar si el número coincide con alguno de los
introducidos con anterioridad.*/
#include<iostream>
using namespace std;
int main(){
	double num1, num2, num3, num4;
	cout<<"Escribe tres numeros : \n";cin>>num1; cin >>num2; cin >>num3;
	cout<<"Escribe un numero para comprobar si es igual a uno anterior  : \n";cin>>num4;
	if(num4==num1 || num4 == num2 || num4 == num3){
		cout<<"\nEl numero coincide con uno de los anteriores";
	}
	else{
		cout<<"\nEl numero NO coincide con uno de los anteriores";
	}
	return 0;
}
