#include <iostream>
using namespace std;
int main(){
  int n = 1;
  int nums[100];
  int counter = 0;
  for(int i = 0; n != 0; i++){
    cin>>n;
    nums[i] = n;
    counter++;
  }
  for(int i = 0; i < counter - 1; i++){
    if(nums[i] > 0)
      cout<<nums[i]<<endl;
  }
}
