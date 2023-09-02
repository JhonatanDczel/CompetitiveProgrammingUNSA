#include <iostream>
using namespace std;
int main(){
  int n; cin>>n;
  int le = 1;
  int he = 100;
  int attemps = 0;
  for(;;){
    int gn = le + rand()%(he - le);
    if(gn == n){
      n = gn;
      break;
    }
    cout<< gn <<" is higher or less (h/l): ";
    char s; cin>>s;
    (s == 'h')? he = gn : le = gn;
    attemps++;
  }
  cout<<"Ur number is: "<<n<<endl;
  cout<<"Attemps: "<<attemps;
}
