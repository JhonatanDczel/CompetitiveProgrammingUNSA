#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
	double temp;
	double sum;
	double maxT = -100, minT = 100;
	for(int i = 1; i <= 6; i++){
		cout<<"Ingrese la temperatura "<<i<<endl;
		cin>>temp;
		sum += temp;
		
		if(temp >= maxT){
			maxT = temp;
		}
		if(temp <= minT){
			minT = temp;
		}
	}
	cout << "El promedio es "<<sum/6<<endl;
	cout << "La minima temperatura es "<<minT<<endl;
	cout << "La maxima temperatura es "<<maxT<<endl;
	
}