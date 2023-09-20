#include<iostream>

using namespace std;

int main(){
  int age;
  cin>>age;
  if(18 <= age && age <= 25){
    cout<<"Si se encuentra dentro del rango";
  }else{
    cout<<"No se encuentra dentro del rango";
  }
  return 0;
}
