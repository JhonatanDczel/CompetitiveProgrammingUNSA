#include<iostream>

using namespace std;

int main(){
  int m1[2][2] = {1, 2, 3, 4};
  int m2[2][2] = {1, 2, 3, 5};
  int mSuma[2][2];

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      mSuma[i][j] = m1[i][j] + m2[i][j];
      cout<<mSuma[i][j] <<" ";
    }
    cout<<endl;
  }
  return 0;
}
