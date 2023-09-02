#include <iostream>
using namespace std;
int main(){
  int s = 1000;
  while(true){
    int r; cin>>r;
    if(s >= r){
      cout<<"WD "<<r<<endl;
      s -= r;
    }else{
      cout<<"Unavailable cash: "<<s;
      break;
    }
  }
}
