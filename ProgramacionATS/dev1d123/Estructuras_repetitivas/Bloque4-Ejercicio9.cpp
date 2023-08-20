#include <iostream>
using namespace std;
int main(){
	int n = 0;
	cout<<"Ingrese el numero para el factorial: ";
	cin >> n;
	int res = 1;
	for(int i = n; i != 0; i--){
		res = res * i;
	}
	cout<<"El factorial de "<<n<<" es "<<res<<endl;
	return 0;
}