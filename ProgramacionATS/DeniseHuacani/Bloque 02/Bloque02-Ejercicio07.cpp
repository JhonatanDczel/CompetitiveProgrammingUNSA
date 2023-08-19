/*7: La calificación final de un estudiante es el promedio de tres notas: la nota
de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota
de participación que cuenta el 10% restante. Escriba un programa que lea las tres notas
del alumno y escriba su nota final.
*/
#include<iostream>
using namespace std;
int main(){
	double prac, teor, parti, nota =0;
	cout << "Ingresa la nota de practicas: "; cin >> prac;
    cout << "Ingresa la nota teorica: "; cin >> teor;
    cout << "Ingresa la nota de participacion: "; cin >> parti;
    nota =(prac*0.3)+ (teor*0.6)+(parti*0.1);
    cout<<"\nLa nota final es : "<<nota;
	return 0 ;
}
