#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char word1[10];
    char word2[10];
    cin>>word1;
    cin>>word2;
    int q = strcmp(word1, word2);
    if (strcmp(word1, word2) != 0) {
        cout<<"No son iguales"<<endl;
        if (q > 0) cout<<"w1 "<<q<<endl;
        else cout<<"w2"<<q<<endl;

    } else cout<<"Iguales"<<endl;
    system("pause");

    return 0;
}
