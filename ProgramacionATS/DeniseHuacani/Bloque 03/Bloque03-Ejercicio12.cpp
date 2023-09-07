/*12: Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Case 3: salir.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int opc,numnew, respuesta=0;
	cout<<"\tOpciones\n";
	cout<<"\n1. Cubo de un numero ";
	cout<<"\n2. Numero par o impar ";
	cout<<"\n3. Salir\n";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Escribe un numero para elevarlo al cubo : ";cin>>numnew;
			respuesta = pow(numnew,3); 
			cout<<"\nEl cubo del numero es : "<<respuesta; break;
		case 2:
			cout<<"Escribe un numero para saber si es par o impar: ";cin>>numnew;
			respuesta = pow(numnew,3); 
			if (numnew%2==0){
				cout<<"\nEl numero es par "; 
			}else{
				cout<<"\nEl numero es impar "; 
			}break;
			
		case 3:
			break;
		
		default :cout<<"\nEscribe numero entre (1-3)";break;
	}
	return 0;
}

