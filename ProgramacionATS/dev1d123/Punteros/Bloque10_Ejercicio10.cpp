#include <iostream>
using namespace std;

void leer_mat(int **&, int &, int &); 
void trans(int **&, int, int);
void imprimir(int **, int, int);

int main() {
    int **pMat, fil, col;
    
    leer_mat(pMat, fil, col);
    
    trans(pMat, fil, col);
    
    imprimir(pMat, col, fil);

    for (int i = 0; i < col; i++) {
        delete[] pMat[i];
    }
    delete[] pMat;

    return 0;
}

void leer_mat(int **&pMat, int &fil, int &col) {
    cout << "Ingrese la cantidad de filas: ";
    cin >> fil;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> col;

    pMat = new int *[fil];
    for (int i = 0; i < fil; i++) {
        pMat[i] = new int[col];
    }

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Digite el numero[" << i << "][" << j << "]: ";
            cin >> pMat[i][j];
        }
    }
}

void trans(int **&pMat, int fil, int col) {
    int **pTransMat = new int *[col];
    for (int i = 0; i < col; i++) {
        pTransMat[i] = new int[fil];
    }

    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            pTransMat[j][i] = pMat[i][j];
        }
    }

    for (int i = 0; i < fil; i++) {
        delete[] pMat[i];
    }
    delete[] pMat;

    pMat = pTransMat;
}

void imprimir(int **pMat, int fil, int col) {
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            cout << pMat[i][j] << " ";
        }
        cout << '\n';
    }
}
