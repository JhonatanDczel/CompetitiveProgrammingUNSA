#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char w1[30], w2[30] = "AEIOU";
    gets(w1);
    strupr(w1);
    for (int i = 0; i < strlen(w2); i++) {
        int a = 0;
        for (int j = 0; j < strlen(w1); j++) {
            if (w1[j] == w2[i]) a++;
        }
        if (a != 0) cout<<w2[i]<<"-"<<a<<endl;
    }
    system("pause");
    return 0;
}
