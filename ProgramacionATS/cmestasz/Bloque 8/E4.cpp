#include <iostream>
using namespace std;

int main()
{
    struct Atleta
    {
        char nombre[20];
        char pais[20];
        int medallas;
    } atletas[100];
    int n, max = 0, posMax = 0;
    cin >> n;
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        cin.getline(atletas[i].nombre, 20);
        cin.getline(atletas[i].pais, 20);
        cin >> atletas[i].medallas;
        fflush(stdin);
        if (atletas[i].medallas > max)
        {
            max = atletas[i].medallas;
            posMax = i;
        }
    }
    cout << atletas[posMax].nombre << endl;
    cout << atletas[posMax].pais << endl;
    return 0;
}
