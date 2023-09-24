#include<iostream>

using namespace std;

int sumaVector(int array[], int len){
  int max = array[0];
  for(int i = 0; i < len; i++){
    if(array[i] > max)
      max = array[i];
  }
  return max;
}
int main(){
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout<<sumaVector(array, 10);
  return 0;
}
