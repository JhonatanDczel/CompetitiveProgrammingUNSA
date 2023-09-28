#include<iostream>

using namespace std;

int main(){
  int array[10], *pArray = array;
  for(int i = 0; i < 10; i++){
    cout<<"Ingrese el elemento [" <<i <<"]: "; cin>>*pArray;
    pArray++;
  }
  pArray = array;
  for(int i = 0; i < 10; i++){
    if(*pArray % 2 == 0)
      cout<<"El numero " <<*pArray<<" es par" <<endl <<"Posicion: " <<pArray<<endl;
    pArray++;
  }
  return 0;
}
