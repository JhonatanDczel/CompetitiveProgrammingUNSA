#include <iostream>
using namespace std;
int main(){
  int av = 0;
  int max = -100;
  int min = 100;
  for(int i = 0; i <= 24; i += 4){
    cout<<i<<":00"<<endl<<"Enter temp: ";
    int t; cin>>t;cout<<endl;
    av += t;
    max = (t > max)? t : max;
    min = (t < min)? t : min;
  }
  cout<<"Average: "<< av / 6<<endl;
  cout<<"Max: "<<max<<endl;
  cout<<"Min: "<<min<<endl;
}
