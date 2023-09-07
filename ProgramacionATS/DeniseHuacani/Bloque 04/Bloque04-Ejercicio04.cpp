//4: Escriba un programa que tome cada 4 horas la temperatura exterior,leyéndola durante un período de 24 horas. 
//Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double temp ,mayor, menor, suma ;
	cout<<"Cual es la temperatura en este momento : "; cin>>temp;
	mayor = temp;
	menor = temp;
	suma = temp;
	for ( int i =1;i<6;i++){
		cout<<"Cual es la temperatura en este momento : "; cin>>temp;
		if (mayor<=temp ){
			mayor = temp;
		}
		if (menor >=temp ){
			menor = temp;
		}
		suma += temp;
	}
	cout<<"\nLa temperatura media del dia es : "<<(suma/6);
	cout<<"\nLa temperatura mas alta es : "<<mayor;
	cout<<"\nLa temperatura mas baja es : "<<menor;
	getch();
	return 0;
}
