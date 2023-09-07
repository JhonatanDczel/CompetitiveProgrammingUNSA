/*
 * Ejercicio 4: Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear
otra cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al final
de la primera cadena y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)".
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  string hola = "Hola que tal", nombre;
  cout << "Ingresa tu nombre: "; cin >> nombre;
  cout << hola + " " + nombre + "\n";
  return 0;
}
