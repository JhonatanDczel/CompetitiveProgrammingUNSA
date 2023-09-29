#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    struct Promedio
    {
        int nota1, nota2, nota3;
    } promedios[100];
    struct Alumno
    {
        char nombre[30];
        char sexo;
        int edad;
        struct Promedio promedios;
    } alumnos[100];
    int n, posMax = 0;
    float max = 0;
    cin >> n;
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        cin.getline(alumnos[i].nombre, 30);
        cin >> alumnos[i].sexo;
        cin >> alumnos[i].edad;
        cin >> alumnos[i].promedios.nota1 >> alumnos[i].promedios.nota2 >> alumnos[i].promedios.nota3;
        fflush(stdin);
        float prom = (alumnos[i].promedios.nota1 + alumnos[i].promedios.nota2 + alumnos[i].promedios.nota3) / 3.0;
        if (prom > max)
        {
            max = prom;
            posMax = i;
        }
    }
    cout << alumnos[posMax].nombre << endl;
    cout << alumnos[posMax].sexo << endl;
    cout << alumnos[posMax].edad << endl;
    cout << max << endl;
    return 0;
}