#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char n1[] = "Hola que tal ";
    char n2[] = "ÂcuÃl es tu nombre? :D \n";
    char n3[30];
    cout<<n1<<endl<<n2;
    gets(n3);
    strcat(n1, n3);
    cout<<n1<<endl;
    system("pause");
    return 0;

}
