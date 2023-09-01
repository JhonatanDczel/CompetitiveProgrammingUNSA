#include <iostream>
using namespace std;

void multi(double a, double b){
	cout<<a*b<<endl;
}
int main(){
	double n1,n2;
	cout<<"Ingrese los numeros "<<endl;
	cin>>n1>>n2;
	multi(n1,n2);
	return 0;
}