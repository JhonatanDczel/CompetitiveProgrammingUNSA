#include <iostream>
using namespace std;
int main(){
  int n; cin>>n;
  int check = n;
  cout<<n<<" = ";
  int p[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
  for(int i = 0; n != 1; i++){
    if((n % p[i]) == 0){
      (check == n)? cout<<"" : cout<<"*";
      cout<<p[i];
      n /= p[i];
      i--;
    }
  }
}
