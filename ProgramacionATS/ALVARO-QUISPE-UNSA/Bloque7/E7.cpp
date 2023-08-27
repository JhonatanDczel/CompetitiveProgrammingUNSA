#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main() {
    char w[30];
    cin.getline(w, strlen(w), '\n');
    strupr(w);
    if (w[0] == 'A') strlwr(w);
    cout<<w<<endl;

    system("pause");
    return 0;
}
