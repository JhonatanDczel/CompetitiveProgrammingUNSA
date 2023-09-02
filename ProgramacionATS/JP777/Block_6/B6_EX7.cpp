#include <iostream>
using namespace std;
int main(){
  int r = 1 + rand()%2;
  int c = 1 + rand()%2;
  int m[r][c];
  int sm = sizeof m / c / 4;
  int sm_v = sizeof m / r / 4;
  int counter = 0;
  for(int i = 0; i < sm; i++){
    for(int j = 0; j < sm_v; j++){
     m[i][j] = 1 + rand()%1;
      cout<<m[i][j];
    }
    cout<<endl;
  }
  for(int i = 0; i < sm; i++){
    for(int j = 0; j < sm_v; j++){
      if(m[i][j] == m[j][i]) counter++;
      if((r == c) & (counter == (r * c))) cout<<"Es simetrica";
    }
  }
}
