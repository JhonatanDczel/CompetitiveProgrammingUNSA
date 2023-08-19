//13: Hacer un que realice la serie fibonacci -> 1 1 2 3 5 8 13...n
#include<iostream>

using namespace std;
int main(){
	int n ,cero = 0, primero=1 ,segundo;
	cout<<"\t Serie fibonacci ";
	cout<<"\nIngrese el valor de n elementos:"; cin>>n;
	cout<<primero<<" ";
	for(int i =1;i<n; i++){
		segundo =primero+cero;
		cero = primero;
		primero =segundo;
		
		cout<<segundo<<" ";
	
	}
	
	return 0;
}
