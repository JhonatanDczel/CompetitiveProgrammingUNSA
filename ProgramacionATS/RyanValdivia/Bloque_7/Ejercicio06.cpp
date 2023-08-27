#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s1[20], s2[20];
    cin >> s1 >> s2;
    if(strcmp(strupr(s1), strupr(s2)) == 0){
        cout << "Son iguales";
    }else{
        cout << "No son iguales";
    }
    return 0;
}