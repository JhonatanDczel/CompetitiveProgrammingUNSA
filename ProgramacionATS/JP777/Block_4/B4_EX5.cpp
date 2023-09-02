#include <iostream>
using namespace std;
int main(){
  int n = 1;
  int nums[100];
  int counter = 0;
  int s = 0;
  for(int i = 0; (n != 0) & ((n < 20) || (n > 30)); i++){
    cin>>n;
    nums[i] = n;
    counter++;
  }
  for(int i = 0; i < counter - 1; i++){
    if(nums[i] > 0)
      s += nums[i];
  }
  cout<<s;
}
