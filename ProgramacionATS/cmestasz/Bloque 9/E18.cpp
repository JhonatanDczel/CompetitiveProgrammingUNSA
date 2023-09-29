#include <iostream>

using namespace std;

struct Fecha
{
    int dia, mes, anio;
} f1, f2;

Fecha mayor(Fecha f1, Fecha f2)
{
    if (f1.anio > f2.anio)
        return f1;
    if (f1.anio < f2.anio)
        return f2;
    if (f1.mes > f2.mes)
        return f1;
    if (f1.mes < f2.mes)
        return f2;
    if (f1.dia > f2.dia)
        return f1;
    return f2;
}

int main()
{
    f1.anio = 2005;
    f1.mes = 9;
    f1.dia = 10;
    f2.anio = 2015;
    f2.mes = 3;
    f2.dia = 11;
    Fecha f3 = mayor(f1, f2);
    cout << f3.dia << " " << f3.mes << " " << f3.anio << endl;
    return 0;
}