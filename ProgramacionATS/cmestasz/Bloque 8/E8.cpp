#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    struct Persona
    {
        char nombre[30];
        bool discapacidad;
    } personas[100];
    int n, posC = 0, posD = 0, cantC = 0, cantD = 0;
    cin >> n;
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        cin.getline(personas[i].nombre, 30);
        cin >> personas[i].discapacidad;
        fflush(stdin);
        if (personas[i].discapacidad)
            cantD++;
        else
            cantC++;
    }
    Persona capacitados[cantC];
    Persona discapacitados[cantD];
    for (int i = 0; i < n; i++)
    {
        if (personas[i].discapacidad)
        {
            discapacitados[posD] = personas[i];
            posD++;
        }
        else
        {
            capacitados[posC] = personas[i];
            posC++;
        }
    }
    return 0;
}