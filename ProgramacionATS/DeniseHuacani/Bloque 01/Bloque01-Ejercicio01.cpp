 /*Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división.
*/
 #include<iostream>
 using namespace std;
 int main(){
 	double numero, numero2, suma =0, resta=0, multiplicacion=0,division=0;
 	
 	cout<<"Ingrese dos numeros" <<endl;
 	cin>>numero;
 	cin>>numero2;
 	suma = numero+numero2;
 	resta = numero-numero2;
 	division = numero/ numero2;
 	cout<<"La suma es : "<<suma<<endl;
 	cout<<"La resta es : "<<resta<<endl;
	cout<<"Su multiplicacion es :"<<numero*numero2<<endl;
	cout<<"Su division es :"<<division<<endl; 
	return 0 ;
 }
