#include <iostream>
#include <limits>
using namespace std;

struct Promedio {
    double nota1, nota2, nota3;
};

struct Alumno {
    char nombre[50];
    char sexo[10];
    int edad;
    Promedio prom;
};

int main() {
    cout << "Ingrese la cantidad de alumnos " << endl;
    int n;
    cin >> n;
    cin.ignore();

    Alumno a[n];
    double maximus = numeric_limits<double>::min();
    Alumno prime;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del alumno " << i + 1 << endl;
        cin.getline(a[i].nombre, 50, '\n');

        cout << "Ingrese el sexo del alumno " << i + 1 << endl;
        cin.getline(a[i].sexo, 10, '\n');

        cout << "Ingrese la edad del alumno " << i + 1 << endl;
        cin >> a[i].edad;

        cout << "Ingrese la nota 1" << endl;
        cin >> a[i].prom.nota1;

        cout << "Ingrese la nota 2" << endl;
        cin >> a[i].prom.nota2;

        cout << "Ingrese la nota 3" << endl;
        cin >> a[i].prom.nota3;
        cin.ignore();

        double pr = (a[i].prom.nota1 + a[i].prom.nota2 + a[i].prom.nota3) / 3;
        if (pr >= maximus) {
            prime = a[i];
            maximus = pr;
        }
    }

    cout << "El mejor alumno es " << endl;
    cout << "Nombre: " << prime.nombre << endl;
    cout << "Sexo: " << prime.sexo << endl;
    cout << "Edad: " << prime.edad << endl;
    cout << "Promedio: " << maximus << endl;

    return 0;
}
