#include<iostream>

using namespace std;

int main(){
  int array[100];
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }
  int mayor = array[0];
  for(int i = 0; i < n; i++){
    if(array[i] > mayor){
      mayor = array[i];
    }
  }
  cout<< mayor;

  return 0;
}
