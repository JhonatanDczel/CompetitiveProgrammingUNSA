#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char w1[] = "AA";
    char w2[strlen(w1)];
    strcpy(w2, w1);
    strrev(w2);
    if (strcmp(w1, w2) == 0) cout<<"PalÃndromo"<<endl;
    else cout<<"no"<<endl;
    system("pause");
    return 0;
}
