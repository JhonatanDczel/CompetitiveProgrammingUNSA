#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s1[20], s2[20];
    cin >> s1 >> s2;
    int id = strcmp(s1, s2);
    if(id == 0){
        cout << "Son iguales";
    }else if(id > 0){
        cout << s1 << " es mayor";
    }else{
        cout << s2 << " es mayor";
    }
    return 0;
}