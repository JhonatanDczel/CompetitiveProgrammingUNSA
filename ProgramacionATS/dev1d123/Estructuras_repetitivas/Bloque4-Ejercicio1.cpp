#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Ingrese un numero del 1 al 10"<<endl;
	cin >> n;
	for(int i = 0; i < 13; i++){
		cout <<n<<" x "<<i<<" = "<<(n*i)<<endl;
	} 
	return 0;
}