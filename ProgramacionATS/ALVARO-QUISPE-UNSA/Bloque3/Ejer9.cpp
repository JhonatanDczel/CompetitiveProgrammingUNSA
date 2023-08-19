#include <iostream>

using namespace std;
int conversor(int y, char i, char v, char x) {
    switch (y) {
        case 1: cout<<i; break;
        case 2: cout<<i<<i; break;
        case 3: cout<<i<<i<<i; break;
        case 4: cout<<i<<v; break;
        case 5: cout<<v; break;
        case 6: cout<<v<<i; break;
        case 7: cout<<v<<i<<i; break;
        case 8: cout<<v<<i<<i<<i; break;
        case 9: cout<<i<<x; break;
        default: cout<<"";
    }
}
int main() {
    int a;
    cout<<"Límite: 3999"<<endl;
    cin>>a;
    conversor(a / 1000, 'M', 53, 53); a %= 1000;
    conversor(a / 100, 'C', 'D', 'M'); a %= 100;
    conversor(a / 10, 'X', 'L', 'C'); a %= 10;
    conversor(a, 'I', 'V', 'X');
    cout<<endl;
    system("pause");
    return 0;
}
