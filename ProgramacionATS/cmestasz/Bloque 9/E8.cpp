#include <iostream>

using namespace std;

void cambio(int n, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cien = n / 100;
    n %= 100;
    cincuenta = n / 50;
    n %= 50;
    veinte = n / 20;
    n %= 20;
    diez = n / 10;
    n %= 10;
    cinco = n / 5;
    n %= 5;
    uno = n;
}

int main()
{
    int n = 6787, cien, cincuenta, veinte, diez, cinco, uno;
    cambio(n, cien, cincuenta, veinte, diez, cinco, uno);
    cout << cien << " " << cincuenta << " " << veinte << " " << diez << " " << cinco << " " << uno << endl;
    return 0;
}