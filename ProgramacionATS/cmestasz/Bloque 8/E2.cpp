#include <iostream>

using namespace std;

struct Alumno
{
    char nombre[20];
    int edad;
    float promedio;
} alumnos[3];

int main()
{
    int max = 0, pos = 0;
    for (int i = 0; i < 3; i++)
    {
        cin.getline(alumnos[i].nombre, 30, '\n');
        cin >> alumnos[i].edad;
        cin >> alumnos[i].promedio;
        fflush(stdin);
        if (alumnos[i].promedio > max)
        {
            max = alumnos[i].promedio;
            pos = i;
        }
    }
    cout << alumnos[pos].nombre << endl;
    cout << alumnos[pos].edad << endl;
    cout << alumnos[pos].promedio << endl;
    return 0;
}