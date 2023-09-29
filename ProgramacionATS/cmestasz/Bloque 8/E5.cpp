#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    struct Promedio
    {
        int nota1, nota2, nota3;
    } promedio;
    struct Alumno
    {
        char nombre[30];
        char sexo;
        int edad;
        struct Promedio promedio;
    } alumno;
    cin.getline(alumno.nombre, 30);
    cin >> alumno.sexo;
    cin >> alumno.edad;
    cin >> alumno.promedio.nota1 >> alumno.promedio.nota2 >> alumno.promedio.nota3;
    cout << alumno.nombre << endl;
    cout << alumno.sexo << endl;
    cout << alumno.edad << endl;
    cout << (alumno.promedio.nota1 + alumno.promedio.nota2 + alumno.promedio.nota3) / 3.0 << endl;
    return 0;
}
