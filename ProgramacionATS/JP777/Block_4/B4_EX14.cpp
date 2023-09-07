#include <iostream>
using namespace std;
int main(){
  int a_a = 0;
  int a_o = 0;
  int a_l = 0;
  for(int i = 1; i <= 5; i++){
    cout<<"Alumn "<<i<<endl;
    int counter = 0;
    int c = a_o;
    bool check = true;
    for(int j = 1; j <= 3; j++){
      cout<<"Exam "<<j<<". Pass? (y/n) "<<endl;
      char p; cin>>p;
      if(p == 'y'){
        if(c == a_o) a_o++;
	if(j != 3) check = false;
	counter++;
      }
      if(j == 3 & p == 'y' & check)
	a_l++;
      if(counter == 3)
	a_a++;
    }
  }
  cout<<a_a<<endl;
  cout<<a_o<<endl;
  cout<<a_l<<endl;
}
