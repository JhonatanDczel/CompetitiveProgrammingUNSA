#include <iostream>
using namespace std;
int main(){
  int v1[5];
  int v2[5];
  for(int i = 0; i < 5; i++){
    cin>>v1[i];
  }
  for(int i = 0; i < 5; i++){
    v2[i] = v1[i] * 2;
    cout<<v2[i]<<endl;
  }
}
