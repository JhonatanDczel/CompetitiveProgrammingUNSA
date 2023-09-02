#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	
	int n;
	
	
	cout<<"\tprograma que harala descomposición en factores primos de un número entero\n";
	cout<<"dijite un numero : ";cin>>n;
	
	cout<<"\n la descomposicion de "<<n<<" es =";
	for(int i=2;i<=n;i++){
		
		if(n%i==0){
			cout<<i;
			if(n!=i){
				cout<<"*";
			}
			n/=i;
			i--;
		}
			
	}
	cout<<"\n\n";
	
	system("pause");
	return 0;
}

