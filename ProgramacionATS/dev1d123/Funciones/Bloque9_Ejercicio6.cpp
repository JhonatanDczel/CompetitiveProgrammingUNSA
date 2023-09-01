#include <iostream>
using namespace std;
template <class P>
void maximo(P a, P b, P c){
	P maximo = a;
	if(b>maximo){
		maximo = b;	
	}
	if(maximo<c){
		maximo = c;
	}
	cout<<"El maximo valor es "<<maximo<<endl;

}
int main(){
	maximo(45,87,45);
	maximo(45.45, 45.46, 65.45);
	maximo('a', 'p', 'c');
	return 0;
}