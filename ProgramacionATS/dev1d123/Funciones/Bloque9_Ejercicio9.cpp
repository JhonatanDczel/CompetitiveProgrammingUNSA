#include <bits/stdc++.h>
using namespace std;
void tiempo(int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg/3600;
	totalSeg %= 3600;
	min = totalSeg/60;
	totalSeg %= 60;
	seg = totalSeg; 
	
}
int main(){
	int t;
	cout<<"Ingrese una cantidad de segundos "<<endl;
	cin>>t;
	int a,b,c;
	tiempo(t, a,b,c);
	cout<<"Horas: "<<a<<endl;
	cout<<"Minutos: "<<b<<endl;
	cout<<"Segundos: "<<c<<endl;
	return 0;
	
}