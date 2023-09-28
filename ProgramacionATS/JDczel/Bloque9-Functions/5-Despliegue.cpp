#include<iostream>

using namespace std;

template <class TIPO>

void desplegar(TIPO dato){
  cout<<dato;
}
int main(){
  int variable = 89;
  desplegar(variable);
  return 0;
}
