#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese un numero en el rango [18 - 25]"<<endl;
	cin >> n;
	if(18 <= n && n <= 28){
		cout<<"El numero si esta en el rango"<<endl;
	} else{
		cout<<"El numero " <<n<<" no esta en el rango :("<<endl;
	}
	return 0;
}