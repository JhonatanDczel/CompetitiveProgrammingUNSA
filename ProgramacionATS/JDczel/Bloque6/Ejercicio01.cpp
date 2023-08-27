
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int matriz[100][100], filas, columnas;

    cout << "Ingresa el número de filas: ";
    cin >> filas;
    
    cout << "Ingresa el número de columnas: ";
    cin >> columnas;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingresa un número [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMostrando la matriz\n\n";

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j];
        }
        cout << "\n";
    }

    getch();
    return 0;
}
