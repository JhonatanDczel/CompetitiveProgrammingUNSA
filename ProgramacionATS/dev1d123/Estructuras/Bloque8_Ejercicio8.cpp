#include <iostream>
using namespace std;
struct Persona{
	char n[30];
	bool isDis;
	
};
int main(){
	int n;
	cout<<"Ingrese cuantas personas son: "<<endl;
	cin>>n;
	cin.ignore();
	Persona p[n];
	int D=0,nD=0;
	for(int i = 0; i < n; i++){
		cout<<"Persona: "<<i+1<<endl;
		cout<<"Nombre: "; 
		
		cin.getline(p[i].n,30,'\n');
		cout<<"Es discapacitado? (1 o 0): "; 
		cin>>p[i].isDis;
		
		cin.ignore();
		
		if(p[i].isDis){
			D++;
		}else{
			nD++;
		}
	}
	string arr1[D];
	string arr2[nD];
	int a=0,b=0;
	for(int i = 0; i < n; i++){
		if(p[i].isDis){
			arr1[a] = p[i].n;
			a++;
		}else{
			arr2[b]=p[i].n;
			b++;
		}
	}
	cout<<"Personas discapacitadas "<<endl;
	for(int i = 0; i < D; i++){
		cout<<arr1[i]<<"\t";
	}
	cout<<endl;
	cout<<"Personas no discapacitadas "<<endl;
	for(int i = 0; i < nD; i++){
		cout<<arr2[i]<<"\t";
	}	
	return 0;
}