#include <iostream>
#include <cstring>
using namespace std;

struct Alumno{
    char nombre[30];
    int edad;
    double prom;
};

void pedir_datos(Alumno *);

int main(){
    Alumno alumnos[3];
    pedir_datos(alumnos);
    return 0;
}

void pedir_datos(Alumno *p_alumnos){
    double promed = 0;
    Alumno goat;

    for(int i = 0 ; i < 3; i++){
        cout << "Datos del alumno " << i+1 << "\n";
        cout << "Nombre: ";
        cin.getline((p_alumnos+i)->nombre, 30,'\n');
        cout << "Edad: ";
        cin >> (p_alumnos+i)->edad;
        
        cout << "Promedio: ";
        cin >> (p_alumnos+i)->prom;
		cin.ignore(); 
        if((p_alumnos+i)->prom > promed){
            promed = (p_alumnos+i)->prom;
            goat = *(p_alumnos+i);
        }
    }

    cout << "El mejor alumno es " << endl;
    cout << "NOMBRE: "<<goat.nombre << endl;
    cout << "EDAD: "<<goat.edad << endl;
    cout << "PROMEDIO: "<<goat.prom << endl;
}
