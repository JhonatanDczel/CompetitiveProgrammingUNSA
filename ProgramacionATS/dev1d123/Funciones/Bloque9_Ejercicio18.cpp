#include <iostream>
using namespace std;

struct Fecha{
    int year;
	int mes;
	int dia;
};

string mayor(string f1, string f2) {
    Fecha a, b;
    int prBarra = f1.find('/');
    int seBarra = f1.rfind('/');
    a.dia = stoi(f1.substr(0, prBarra));
    a.mes = stoi(f1.substr(prBarra + 1, seBarra - prBarra - 1));
    a.year = stoi(f1.substr(seBarra + 1));
    
    prBarra = f2.find('/');
    seBarra = f2.rfind('/');
    b.dia = stoi(f2.substr(0, prBarra));
    b.mes = stoi(f2.substr(prBarra + 1, seBarra - prBarra - 1));
    b.year = stoi(f2.substr(seBarra + 1));
    
    if (a.year > b.year) {
        return f1;
    } else if (a.year < b.year) {
        return f2;
    } else {
        if (a.mes > b.mes) {
            return f1;
        } else if (a.mes < b.mes) {
            return f2;
        } else {
            if (a.dia > b.dia) {
                return f1;
            } else {
                return f2;
            }
        }
    }
}

int main() {
    string fecha1 = "25/12/2020";
    string fecha2 = "31/12/2020";

    string fechaMayor = mayor(fecha1, fecha2);
    cout << "La fecha mayor es: " << fechaMayor << endl;

    return 0;
}
