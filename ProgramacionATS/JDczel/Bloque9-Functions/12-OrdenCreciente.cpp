#include<iostream>

using namespace std;

string esCreciente(int array[], int len){
  bool creciente = true;
  for(int i = 1; i < len; i++){
    if(array[i - 1] >  array[i])
      creciente = false;
  }
  if(creciente)
    return "si";
  return "no";
}
int main(){
  int array[] = {1, 2, 3, 4, 5, 6};
  cout<<"El array " <<esCreciente(array, 6) <<" es creciente";
  return 0;
}
