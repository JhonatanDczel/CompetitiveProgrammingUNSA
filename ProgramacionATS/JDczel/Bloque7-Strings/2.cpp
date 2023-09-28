#include<iostream>
#include<string.h>

using namespace std;

int main(){
  char word[100];
  cin>>word;
  char newWord[100];
  strcpy(newWord, word);
  cout<<newWord;
  return 0;
}
