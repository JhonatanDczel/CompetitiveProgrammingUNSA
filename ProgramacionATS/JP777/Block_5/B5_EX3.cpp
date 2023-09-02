#include <iostream>
using namespace std;
int main(){
  int v[5];
  for(int i = 0; i < 5; i++){
    cin>>v[i];
  }
  for(int i = 0; i < 5; i++){
    cout<<i + 1<<"*: "<<v[i]<<endl;
  }
}
