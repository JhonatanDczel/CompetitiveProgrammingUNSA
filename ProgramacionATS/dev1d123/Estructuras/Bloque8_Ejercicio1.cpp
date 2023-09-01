#include <iostream>
using namespace std;

struct Corredor {
    char nombre[30];  
    int edad;
    char sexo[10];   
};

int main() {
    Corredor user;
    cin.getline(user.nombre, 30, '\n');
    cin>>user.edad;
    cin.ignore(); 
    cin.getline(user.sexo, 10, '\n');

    string categoria;
    if (user.edad <= 18) {
        categoria = "Juvenil";
    } else if (user.edad <= 40) {
        categoria = "Senior";
    } else {
        categoria = "Veterano";
    }
    cout << "Nombre: " << user.nombre << endl;
    cout << "Edad: " << user.edad << endl;
    cout << "Sexo: " << user.sexo << endl;
    cout << "Categoria: " << categoria << endl;
    
    return 0;
}
