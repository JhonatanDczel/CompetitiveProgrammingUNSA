#include <iostream>
using namespace std;
int main() {
    char a;
    cin>>a;
    switch (a) {
        case 'a': cout<<"vocal minuscula"<<endl; break;
        case 'e': cout<<"vocal minuscula"<<endl; break;
        case 'i': cout<<"vocal minuscula"<<endl; break;
        case 'o': cout<<"vocal minuscula"<<endl; break;
        case 'u': cout<<"vocal minuscula"<<endl; break;
        case 'A': cout<<"vocal mayúscula"<<endl; break;
        case 'E': cout<<"vocal mayúscula"<<endl; break;
        case 'I': cout<<"vocal mayúscula"<<endl; break;
        case 'O': cout<<"vocal mayúscula"<<endl; break;
        case 'U': cout<<"vocal mayúscula"<<endl; break;
        default: cout<<"No es nada de lo anterior :'v";
    }
    system("pause");
    return 0;
}