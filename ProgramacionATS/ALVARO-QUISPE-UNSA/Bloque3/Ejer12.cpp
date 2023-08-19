#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout<<"1. Cubo de un nÃmero\n"<<"2. NÃmero par o impar\n"<<"3. Salir"<<endl;
    int a, b;
    cin>>a;
    if (a == 1) {
        cin>>b;
        cout<< pow(b, 3);
    } else if (a == 2) {
        cin>>b;
        if (b % 2 == 0) cout<<"par";
        else cout<<"impar";
    } else cout<<"Bye bye";
    cout<<endl;
    system("pause");
    return 0;
}
