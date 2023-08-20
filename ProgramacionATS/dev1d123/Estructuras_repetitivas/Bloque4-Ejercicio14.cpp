#include <iostream>
using namespace std;
int main(){
	int allE = 0, alO = 0, lE = 0;
	for(int i = 1; i <= 5; i++){
		double n1,n2,n3;
		cout<<"Ingrese la nota de primer examen del alumno "<<i<<endl;
		cin>>n1;
		cout<<"Ingrese la nota de segundo examen del alumno "<<i<<endl;
		cin>>n2;
		cout<<"Ingrese la nota de tercer examen del alumno "<<i<<endl;
		cin>>n3;
		
		if(n1 >= 10.5 && n2 >= 10.5 && n3 >= 10.5 ){
			allE++;
		}
		if(n1 >= 10.5 || n2 >= 10.5 || n3 >= 10.5 ){
			alO++;
		}
		if(n3 >= 10.5){
			lE++;
		}
	}
	cout<<"Todos los examenes aprobados: "<<allE<<endl;
	cout<<"Al menos 1 examen: "<<alO<<endl;
	cout<<"Ultimo examen: "<<lE<<endl;
	return 0;
}