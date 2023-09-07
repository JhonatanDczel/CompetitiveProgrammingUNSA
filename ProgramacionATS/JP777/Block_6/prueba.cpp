#include <iostream>
using namespace std;
int main(){
  int v1[10] = {2,3,7,5,1,2,4,6,3,1};
  int sv1 = sizeof v1 / 4;
  int v2[sv1];

  for(int i = 0; i < sv1; i++){
    int position; cin>>position;
    v2[position] = v1[i];
  }
  for(int i = 0; i < sv1; i++){
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  for(int i = 0; i < sv1; i++){
    cout<<v2[i]<<" ";
  }
}
