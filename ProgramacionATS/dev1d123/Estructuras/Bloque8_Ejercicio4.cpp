#include <iostream>
#include <limits>
using namespace std;

struct Atleta {
    char nombre[50];
    char pais[20];
    int nMedal;
};

int main() {
    int n;
    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    cin.ignore();

    Atleta atl[n];
    Atleta prime;
    int maximus = numeric_limits<int>::min();
	//xd
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta " << i + 1 << ": ";
        cin.getline(atl[i].nombre, 50, '\n');

        cout << "Ingrese el pais del atleta " << i + 1 << ": ";
        cin.getline(atl[i].pais, 20, '\n');

        cout << "Ingrese la cantidad de medallas del atleta " << i + 1 << ": ";
        cin >> atl[i].nMedal;
        cin.ignore();

        if (maximus <= atl[i].nMedal) {
            prime = atl[i];
            maximus = atl[i].nMedal;
        }
    }

    cout << "Nombre: " << prime.nombre << endl;
    cout << "Pais: " << prime.pais << endl;
    cout << "Numero de medallas: " << prime.nMedal;

    return 0;
}
