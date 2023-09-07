//Ejercicio 3
#include<iostream> 
using namespace std;
int main(){
	int age;
	char gender[50];
	double heigth;
	
	cout << "Enter your age : ";
	cin >> age;
	cout << "Enter your gender : ";
	cin >> gender;
	cout << "Enter your heigth : ";
	cin >> heigth;
	
	cout << "Your age is: " << age <<endl;
	cout << "Your gender is: " << gender <<endl;
	cout << "Your heigth is: " << heigth <<endl;
	cin >> age;
	return 0;
}