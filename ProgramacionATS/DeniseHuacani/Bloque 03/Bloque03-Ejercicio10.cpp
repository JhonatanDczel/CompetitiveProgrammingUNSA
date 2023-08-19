//10: Mostrar los meses del año, pidiéndole al usuario un número entre (1-12),
//y mostrar el mes al que corresponde.
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Escribe numero entre (1-12) : ";cin>>numero;
	switch(numero){
		case 1:cout<<"\nEs Enero"; break;
		case 2:cout<<"\nEs Febrero"; break;
		case 3:cout<<"\nEs Marzo"; break;
		case 4:cout<<"\nEs Ab7il"; break;
		case 5:cout<<"\nEs Mayo"; break;
		case 6:cout<<"\nEs Junio"; break;
		case 7:cout<<"\nEs Julio"; break;
		case 8:cout<<"\nEs Agosto"; break;
		case 9:cout<<"\nEs Septiembre"; break;
		case 10:cout<<"\nEs Octubre"; break;
		case 11:cout<<"\nEs Noviembre"; break;
		case 12:cout<<"\nEs Diciembre"; break;
		default :cout<<"\nEscribe un numero entre (1-12) ";break;
	}
	return 0;
}
