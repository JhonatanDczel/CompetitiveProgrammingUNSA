#include <iostream>
using namespace std;
int main(){
  int v[5];
  for(int i = 0; i < 5; i++){
    v[i] = 1 + rand()%9;
  }
  for(int i = 4; i >= 0; i--){
    cout<<i + 1<<"*: "<<v[i]<<endl;
  }
}
