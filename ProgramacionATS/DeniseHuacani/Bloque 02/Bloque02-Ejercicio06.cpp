//6: Escriba un programa que lea las tres notas de un alumno y calcule la nota
//final media de dicho alumno
#include<iostream>
using namespace std;
int main(){
	double pri, sec, ter, promedio =0;
	cout << "Primera nota : "; cin >> pri;
    cout << "Segunda nota : "; cin >> sec;
    cout << "Tercera nota : "; cin >> ter;
    promedio =(pri+sec+ter)/3;
    cout<<"\nLa nota final media es : "<<promedio;
	return 0 ;
}
