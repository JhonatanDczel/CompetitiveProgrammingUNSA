#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3,num4;
	cout<<"Coloque 3 numeros \n";
	cin>>num1>>num2>>num3;
	cout<<"Ahora coloque un numero: ";
	cin>>num4;
	if (num4 == num1) {
        cout << "Su numero coincide con el primer numero";
    } else if (num4 == num2) {
        cout << "Su numero coincide con el segundo numero";
    } else if (num4 == num3) {
        cout << "Su numero coincide con el tercer numero";
    } else {
        cout << "Su numero no coincide con ninguno de sus 3 numeros";
    }

    return 0;
}
