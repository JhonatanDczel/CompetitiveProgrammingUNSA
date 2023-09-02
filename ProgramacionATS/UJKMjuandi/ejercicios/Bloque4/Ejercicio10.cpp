#include<iostream>

using namespace std;

int main(){
	int num,sum,fac = 1;
	cout<<"Coloque hasta que factorial quiere sumar: ";
 	cin>>num;
 	for(int i = 1; i<=num;i++){
 		fac*=i;
 		sum+=fac;
	}
	cout<<sum;
	return 0;
}
