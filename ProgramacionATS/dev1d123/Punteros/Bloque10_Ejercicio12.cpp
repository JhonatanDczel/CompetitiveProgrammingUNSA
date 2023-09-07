#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Tiempo{
    int hor,min,seg;
}tiempo[3],*puntero_tiempo = tiempo;

void pedirDatos();
void sumarEtapas(Tiempo *);

int main(){
    pedirDatos();
    sumarEtapas(puntero_tiempo);

    getch();
    return 0;
}

void pedirDatos(){
    for (int i = 0; i < 3; i++){
        cout<<"Etapa "<<i+1<<endl;
        cout<<"Digite el numero de horas: ";
		cin>>(puntero_tiempo+i)->hor;
        cout<<"Digite el numero de minutos: ";
		cin>>(puntero_tiempo+i)->min;
        cout<<"Digite el numero de segundos: ";
		cin>>(puntero_tiempo+i)->seg;
    } 
}
void sumarEtapas(Tiempo *puntero_tiempo) {
    int h = 0, m = 0, s = 0;

    for (int i = 0; i < 3; i++) {
        s += (puntero_tiempo + i)->seg;
        m += (puntero_tiempo + i)->min + s / 60;
        s %= 60;
        h += (puntero_tiempo + i)->hor + m / 60;
        m %= 60;
    }
    cout << "\nTiempo total: \n" << endl;
    cout << "Horas: " << h << endl;
    cout << "Minutos: " << m << endl;
    cout << "Segundos: " << s << endl;
}