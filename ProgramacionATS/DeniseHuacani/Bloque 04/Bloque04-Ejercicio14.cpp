/*14: En una clase de 5 alumnos se han realizado tres ex�menes y se requiere
determinar el n�mero de:
a) Alumnos que aprobaron todos los ex�menes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron �nicamente el �ltimo examen.
Realice un programa que permita la lectura de los datos y el c�lculo de las estad�sticas.*/
#include<iostream>

using namespace std;
int main(){
	int note1,note2,note3 ,apro_todo=0, apro_uno=0, apro_ultima=0;
	cout<<"\t Notas de los alumnos \n";
	cout<<"Nota minima aprobatoria 11 \n";
	for(int i =1;i<=5; i++){
		
		cout<<"\n Alumno "<<i<<": ";
		cout<<"\nExamen 1 : "; cin>>note1;
		cout<<"\nExamen 2 : "; cin>>note2;
		cout<<"\nExamen 3 : "; cin>>note3;
		if ((note1>=11)&&(note2>=11)&&(note3>=11)){
			apro_todo++;
		}else if ((note1<11)&&(note2<11) && (note3>=11)){
			apro_ultima++;
		}else{
			apro_uno++;
		}
	
	}
	cout<<"\n Alumnos que aprobaron todos los ex�menes son : "<<apro_todo;
	cout<<"\n Alumnos que aprobaron al menos un examen son : "<<apro_uno;
	cout<<"\n Alumnos que aprobaron �nicamente el �ltimo examen son : "<<apro_ultima;

	
	return 0;
}
