#include <iostream>
using namespace std;
void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cout<<"Minima cantidad de billetes para " <<dolares<<endl;
	cien = dolares/100;
	dolares = dolares%100;
	cincuenta = dolares/50;
	dolares = dolares%50;
	veinte = dolares/20;
	dolares = dolares%20;
	diez = dolares/10;
	dolares = dolares%10;
	cinco = dolares/5;
	dolares = dolares%5;
	uno = dolares;
	cout<<"100: "<<cien<<endl;
	cout<<"50: "<<cincuenta<<endl;
	cout<<"20: "<<veinte<<endl;
	cout<<"10: "<<diez<<endl;
	cout<<"5: "<<cinco<<endl;
	cout<<"1: "<<uno<<endl;
}
int main(){
	int a,b,c,d,e,f;
	cambio(100, a,b,c,d,e,f);
	cambio(13651,a,b,c,d,e,f);
	cambio(415,a,b,c,d,e,f);
	cambio(486,a,b,c,d,e,f);

	return 0;
}