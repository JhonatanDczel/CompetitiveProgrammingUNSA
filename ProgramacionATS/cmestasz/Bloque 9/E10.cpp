#include <iostream>

using namespace std;

void calc_anios(int totalDias, int &anio, int &mes, int &dia)
{
    anio = 2000;
    mes = 1;
    dia = 1;
    anio += totalDias / 365;
    totalDias %= 365;
    mes += totalDias / 30;
    totalDias %= 30;
    dia += totalDias;
}

int main()
{
    int totalDias = 7889, anio, mes, dia;
    calc_anios(totalDias, anio, mes, dia);
    cout << dia << " " << mes << " " << anio << endl;
    return 0;
}