#include <iostream>
using namespace std;
void p_frac(double n){
	int entero = static_cast<int>(n);
	cout<<n-entero<<endl;
}
int main(){
	double number;
	cin>>number;
	cout<<"Ingrese el numero "<<endl;
	p_frac(number);	
	return 0;
}