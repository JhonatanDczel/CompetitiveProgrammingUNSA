#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double cat1,cat2;
	cout<<"Coloque el primer cateto: ";
	cin>>cat1;
	cout<<"Coloque el segundo cateto: ";
	cin>>cat2;
	cout<<"Su hipotenusa sera: "<<sqrt(pow(cat1,2)+pow(cat2,2));
	return 0;
}
