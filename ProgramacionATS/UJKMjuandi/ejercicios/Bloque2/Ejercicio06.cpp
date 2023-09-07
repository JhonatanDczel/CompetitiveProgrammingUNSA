#include<iostream>

using namespace std;

int main(){
	double n1,n2,n3;
	cout<<"Coloque las notas del alumno \nNOTA 1: ";
	cin>>n1;
	cout<<"NOTA 2: ";
	cin>>n2;
	cout<<"NOTA 3: ";
	cin>>n3;
	cout<<"La nota promedio es: "<<(n1+n2+n3)/3;
	return 0;
}
