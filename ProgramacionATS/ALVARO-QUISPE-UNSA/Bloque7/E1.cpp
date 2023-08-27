#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char word[9];
    cin>>word;
    if (strlen(word) > 10) cout<<word<<endl<<strlen(word)<<endl;
    system("pause");
    return 0;
}
