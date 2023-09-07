#include <iostream>
using namespace std;
int main() {
    int min = 0, max = 0;
    cout<<min<<"+"<<max;
    for (int i = 0; i < 6; i++) {
        int a;
        cout<<"Temperatura "<<i + i<<endl;
        cin>>a;
        if (a < min) min = a;
        if (a > max) max = a;
    }
    cout<<"max "<<max<<endl<<"min "<<min;

    system("pause");
    return 0;
}
