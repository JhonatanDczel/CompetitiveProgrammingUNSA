#include<iostream>
#include<string.h>

using namespace std;

int main(){
  char word[100];
  cin>>word;
  if(strlen(word) > 10){
    cout<<word;
  }
  return 0;
}
