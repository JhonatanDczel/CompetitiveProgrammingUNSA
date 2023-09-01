#include <iostream>
using namespace std;

struct Alumno {
    char nombre[50];
    int edad;
    double promedio;
};

int main() {
    Alumno alumno1, alumno2, alumno3;

    cout << "Ingrese los datos del alumno 1" << endl;
    cin.getline(alumno1.nombre, 50, '\n');
    cin >> alumno1.edad >> alumno1.promedio;
    cin.ignore();

    cout << "Ingrese los datos del alumno 2" << endl;
    cin.getline(alumno2.nombre, 50, '\n');
    cin >> alumno2.edad >> alumno2.promedio;
    cin.ignore();

    cout << "Ingrese los datos del alumno 3" << endl;
    cin.getline(alumno3.nombre, 50, '\n');
    cin >> alumno3.edad >> alumno3.promedio;
    cin.ignore();

    Alumno mayorPromedio;

    if (alumno1.promedio >= alumno2.promedio && alumno1.promedio >= alumno3.promedio) {
        mayorPromedio = alumno1;
    } else if (alumno2.promedio >= alumno1.promedio && alumno2.promedio >= alumno3.promedio) {
        mayorPromedio = alumno2;
    } else {
        mayorPromedio = alumno3;
    }

    cout << "Nombre: " << mayorPromedio.nombre << endl;
    cout << "Edad: " << mayorPromedio.edad << endl;
    cout << "Promedio: " << mayorPromedio.promedio << endl;

    return 0;
}
