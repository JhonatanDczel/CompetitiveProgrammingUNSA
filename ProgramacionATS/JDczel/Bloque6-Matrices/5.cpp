#include<iostream>

using namespace std;

int main(){
  int m[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int mTraspuesta[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      mTraspuesta[i][j] = m[j][i];
      cout<<mTraspuesta[i][j] <<" ";
    }
    cout<<endl;
  }
  return 0;
}
