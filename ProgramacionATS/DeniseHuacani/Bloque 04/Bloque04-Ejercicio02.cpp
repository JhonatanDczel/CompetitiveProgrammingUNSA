/*2: Realice un programa que lea de la entrada estándar números hasta que se
introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida
estándar el número de valores mayores que cero leídos.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num, cont =0;
	
	do{
		cout<<"Ingrese un numero :"; cin>>num;
		if (num>0){
			cont++;
		}	
	}while (num!=0);
	cout<<"\nLa cantidad de numero mayores que cero son :"<<cont; 
	getch();
	return 0;
}
