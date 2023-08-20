#include<iostream>

using namespace std;

int main(){
	
	double a,b,c;
	cout<<"Coloque el valor de a: ";
	cin>>a;
	cout<<"Coloque el valor de b: ";
	cin>>b;
	c = a;
	a = b;
	b = c;
	cout<<"El nuevo valor de a es: "<<a<<"\n El nuevo valor de b es: "<<b;
	
	
	return 0;
}
