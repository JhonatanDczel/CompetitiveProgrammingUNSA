#include <iostream>
using namespace std;
int main(){
  int m1[2][2];
  int m2[2][2];
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      m1[i][j] = 1 + rand()%5;
      m2[i][j] = m1[i][j];
      cout<<m2[i][j];
    }
    cout<<endl;
  }
}
