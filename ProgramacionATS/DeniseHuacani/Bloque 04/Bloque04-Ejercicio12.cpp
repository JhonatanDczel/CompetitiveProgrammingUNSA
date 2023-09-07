//12: Hacer un programa que calcule el resultado de la siguiente expresión:1-2+3-4+5-6...n
#include<iostream>

using namespace std;
int main(){
	int n ,respuesta=0;
	cout<<"\t 1-2+3-4+5-6...n";
	cout<<"\nIngrese el valor de n:"; cin>>n;
	for(int i =1;i<=n; i++){
		if (i%2==0){
			respuesta -=i ;
		}else {
			respuesta +=i;
		}
	
	}
	cout<<"\nLa respuesta es :  "<<respuesta;
	return 0;
}
