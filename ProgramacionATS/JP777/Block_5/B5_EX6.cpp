#include <iostream>
using namespace std;
int main(){
  int v[5];
  bool de = true;
  for(int i = 0; i < 5; i++){
    v[i] = 1 + rand()%5;
    cout<<v[i]<<endl;
  }
  for(int i = 0; i < 5; i++){
    int s = 0;
    int counter = 0;
    for(int j = 0; j < 5; j++){
      if(v[j] == v[i]) continue;
      s += v[j];
      counter++;
    }
    if((s == v[i]) & (counter == 4)){
      cout<<"Exist";
      de = false;
    }
  }
  if(de) cout<<"Doesn't exist";
}
