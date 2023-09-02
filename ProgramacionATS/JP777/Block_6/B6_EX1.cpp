#include <iostream>
using namespace std;
int main(){
  int r; cin>>r;
  int c; cin>>c;
  int m[r][c];
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout<<"Row "<<i + 1<<", Column "<<j + 1<<": ";
      cin>>m[i][j];
    }
  }
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout<<m[i][j];
    }
    cout<<endl;
  }
}
