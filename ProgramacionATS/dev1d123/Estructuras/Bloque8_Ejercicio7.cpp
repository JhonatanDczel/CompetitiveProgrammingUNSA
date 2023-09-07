#include <iostream>
using namespace std;
struct Ciclista{
	int horas, minutos, segundos;
};
int main(){
	int n;
	cout<<"Ingrese el numero de etapas "<<endl;
	cin>>n;
	Ciclista et[n];
	
	for(int i = 0; i < n; i++){
		cout<<"ETAPA "<<i+1<<endl;
		cout<<"Horas: ";
		cin>>et[i].horas;
		cout<<"Minutos: ";
		cin>>et[i].minutos;
		cout<<"Segundos: ";
		cin>>et[i].segundos;
	}
	Ciclista all;
	all.horas=0;
	all.minutos=0;
	all.segundos=0;
	for(int i = 0; i < n; i++){
		all.horas += et[i].horas;
		all.minutos += et[i].minutos;
		if(all.minutos >= 60){
			all.minutos -= 60;
			all.horas++;
		}
		all.segundos += et[i].segundos;
		if(all.segundos >= 60){
			all.segundos -= 60;
			all.minutos++;
		}
	}
	cout<<"TIEMPO TOTAL "<<endl;
	cout<<"Horas: "<<all.horas<<endl;
	cout<<"Minutos: "<<all.minutos<<endl;
	cout<<"Segundos: "<<all.segundos<<endl;
	
	return 0;
}
