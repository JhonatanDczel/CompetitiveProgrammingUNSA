#include <iostream>
using namespace std;
int main(){
  int r; cin>>r;
  int c; cin>>c;
  int m1[r][c];
  int m2[r][c];
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      m1[i][j] = 1 + rand()%5;
    }
  }
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      m2[i][j] = m1[i][j];
      cout<<m2[i][j];
    }
    cout<<endl;
  }
}
