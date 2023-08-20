#include<iostream>
#include<math.h>

using namespace std;

int main(){
	double a,b,c,x1,x2;
	cout<<"Coloque el valor de a: ";
	cin>>a;
	cout<<"Coloque el valor de b: ";
	cin>>b;
	cout<<"Coloque el valor de c: ";
	cin>>c;
	cout<<"el valor de x1 es: "<< ((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	cout<<"\nel valor de x2 es: "<< ((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	return 0;
}
