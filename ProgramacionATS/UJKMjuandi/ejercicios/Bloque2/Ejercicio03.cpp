#include<iostream>

using namespace std;

int main(){
	double a,b,c,d,e,f;
	cout<<"Coloque el valor de a: ";
	cin>>a;
	cout<<"Coloque el valor de b: ";
	cin>>b;
	cout<<"Coloque el valor de c: ";
	cin>>c;
	cout<<"Coloque el valor de d: ";
	cin>>d;
	cout<<"Coloque el valor de e: ";
	cin>>e;
	cout<<"Coloque el valor de f: ";
	cin>>f;
	cout.precision(2);
	cout<<(a+b/c)/(d+e/f);
	return 0;
}
