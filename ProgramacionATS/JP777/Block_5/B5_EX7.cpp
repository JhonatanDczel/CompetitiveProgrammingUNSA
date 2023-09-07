#include <iostream>
using namespace std;
int main(){
  char v1[] = {'n','a','t','h','y'};
  char v2[] = {'i','m','i','s','s','u'};
  int sv1 = sizeof v1;
  int sv2 = sizeof v2;
  char v3[sv1 + sv2];
  for(int i = 0; i < (sv1 + sv2); i++){
    (i < sv1)? v3[i] = v1[i] : v3[i] = v2[i - sv1];
    cout<<v3[i];
  }

}
