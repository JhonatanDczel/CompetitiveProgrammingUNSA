/*Escribir un programa que de la entrada estándar el precio de un producto y
muestre en la salida estándar el precio del producto al aplicarle el IVA.
El impuesta general de IVA es del 18%
*/
#include<iostream>
using namespace std;
int main(){
	double precio,impuesto =0;
	cout<<"Precio del producto: \n";
	cin>> precio;
	impuesto = precio * 0.18;
	cout<<"Precio con IVA : "<< (precio + impuesto) ;
	
	return 0 ;
	
}
