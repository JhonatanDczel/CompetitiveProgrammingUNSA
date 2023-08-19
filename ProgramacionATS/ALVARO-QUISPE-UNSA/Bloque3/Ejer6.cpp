#include <iostream>
using namespace std;
int main() {
    char a;
    cin>>a;
    switch (a) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<< "es una vocal minuscula"<<endl; break;
        case 'A': case 'E': case 'I': case 'O':
        case 'U': cout<< "es una vocal mayuscula"<<endl; break;
        default: cout<<"No es una vocal oe";
    }
    system("pause");
    return 0;
}