#include <iostream>

using namespace std;
int main(){
	int cont = 0,pn = 0,ult = 0;
	for(int i = 0; i<5; i++){
		int nota1,nota2,nota3;
		cout<<"Coloque las notas del alumno: ";
		cin>>nota1>>nota2>>nota3;
		if(nota1>10 || nota2>10 || nota3>10){
			pn++;
		}
		if(nota1>10 && nota2>10 && nota3>10){
			cont++;
		}
		if(nota3>10){
			ult++;
		}
	}
	cout<<"Alumnos que aprobaron todos los examenes: "<<cont;
	cout<<"\nAlumnos que aprobaron almenos un examen: "<<pn;
	cout<<"\nAlumnos que aprobaron el ultimo examen: "<<ult;
	return 0;
}

