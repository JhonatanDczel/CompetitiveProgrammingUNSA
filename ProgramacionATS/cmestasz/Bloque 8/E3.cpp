#include <iostream>
using namespace std;

struct Empleado
{
    char nombre[20];
    float salario;
} empleado[100];

int main()
{
    int n, max = 0, min = 999999, posMax, posMin;
    cin >> n;
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        cin.getline(empleado[i].nombre, 20);
        cin >> empleado[i].salario;
        fflush(stdin);
        if (empleado[i].salario > max)
        {
            max = empleado[i].salario;
            posMax = i;
        }
        if (empleado[i].salario < min)
        {
            min = empleado[i].salario;
            posMin = i;
        }
    }
    cout << "Mayor:" << endl;
    cout << empleado[posMax].nombre << endl;
    cout << empleado[posMax].salario << endl;
    cout << "Menor:" << endl;
    cout << empleado[posMin].nombre << endl;
    cout << empleado[posMin].salario << endl;
    return 0;
}
