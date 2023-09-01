#include <iostream>
using namespace std;

void calc_years(int dias, int& year, int& mes, int& dia); 

int main() {
    cout << "Ingrese la cantidad de dias: " << endl;
    int d;
    cin >> d;
    int a=0, b=0, c=0;
    calc_years(d, a, b, c);

    c += 1;
    if(c>30){
    	b+=c/30;
    	c = c%30;
	}
    b += 1;
    if(b > 12) {
    	a += b/12;
    	b = b%12;
	}
	a += 2000;
	cout<<"La fecha actual es "<<a<<"/"<<b<<"/"<<c<<endl;
    return 0;
}

void calc_years(int dias, int& year, int& mes, int& dia) {
    year = dias / 365;
    dias %= 365;
    mes = dias / 30;
    dias %= 30;
    dia = dias;
}
