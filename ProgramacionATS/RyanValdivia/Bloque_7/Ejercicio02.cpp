#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char name1[20], name2[20];
    cin >> name1;
    strcpy(name2, name1);
    cout << name2;
    return 0;
}