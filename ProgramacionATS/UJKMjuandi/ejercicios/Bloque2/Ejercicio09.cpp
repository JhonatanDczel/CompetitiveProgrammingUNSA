#include<iostream>
#include<math.h>

using namespace std;

int main(){
	double x,y;
	cout<<"Coloque la variable x: ";
	cin>>x;
	cout<<"Coloque la variable y: ";
	cin>>y;
	cout<<"El resultado sera: "<<sqrt(x)/(pow(y,2)-1);
	return 0;
}
