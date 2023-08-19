/*15: Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango
[1-100], e indicarle al usuario si el número que digito es menor o mayor al número
aleatorio, así hasta que lo adivine. Y por ultimo mostrarle el número de intentos que le
llevo.
*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	int numero ,dato ,cont=0;
	srand(time(NULL));
	dato=1+rand()%(100);
	cout<<"\tADIVINA EL NUMERO\n";
	do{
		cout<<"Ingrese un numero entero :"; cin>>numero;
		if (numero>dato){
			cout<<"\nIngrese un numero menor\n";
		}else if (numero<dato){
			cout<<"\nIngrese un numero mayor\n";
		}
		cont++;
	}while(numero !=dato);
	cout<<"\n\tADIVINASTE EL NUMERO";
	cout<<"\nCantidad de intentos :"<<cont; 
	
	return 0;
}
