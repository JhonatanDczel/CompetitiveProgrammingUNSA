//8: Escriba un programa que lea de la entrada est�ndar los dos catetos de un
//tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double cat1, cat2, hipotenusa =0;
	cout << "Ingresa la medida del primer cateto : "; cin >> cat1;
    cout << "Ingresa la medida del segundo cateto : "; cin >> cat2;
	
    hipotenusa = sqrt(pow(cat1,2)+pow(cat2,2));
    cout << "\n La hipotenusa del triangulo es: " << hipotenusa;
	return 0 ;
}
