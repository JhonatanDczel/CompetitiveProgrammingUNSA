#include <iostream>
#include <string.h>
using namespace std;
int main(){
  char str1[20]; cin>>str1;
  char str2[20]; cin>>str2;
  if(strcmp(str1,str2) == 0){
    cout<<"They'r equals";
  }else{
    (str1[0] < str2[0])? cout<<str1<<" is higher" : cout<<str2<<" is higher";
  }
}
