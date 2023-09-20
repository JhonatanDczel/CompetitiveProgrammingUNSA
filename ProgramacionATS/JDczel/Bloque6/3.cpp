#include<iostream>

using namespace std;

int main(){
  int matrix1[2][2] = {1, 2, 3, 4};
  int matrix2[2][2];

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      matrix2[i][j] = matrix1[i][j];
      cout<<matrix2[i][j];
    }
  }
  return 0;
}
