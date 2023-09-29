#include <iostream>

using namespace std;

int main()
{
    struct Etapa
    {
        int horas, minutos, segundos;
    } etapas[100];
    int n, h = 0, m = 0, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> etapas[i].horas >> etapas[i].minutos >> etapas[i].segundos;
        h += etapas[i].horas;
        m += etapas[i].minutos;
        s += etapas[i].segundos;
    }
    m += s / 60;
    s %= 60;
    h += m / 60;
    m %= 60;
    cout << h << endl;
    cout << m << endl;
    cout << s << endl;
    return 0;
}