#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    float tempMedia = 0, tempAlta = 0, tempActual = 0, sumaTemp, tempBaja = 0;
    cout <<"Ingrese la temperatura a las 4: "; cin >>tempActual;
    tempAlta = tempActual; tempBaja = tempActual;
    sumaTemp = tempActual;

    for(int i = 8; i <= 24; i+=4){
        cout <<"Ingrese la temperatura a las " <<i <<":"; cin >>tempActual;

        if(tempActual > tempAlta){
            tempAlta = tempActual;
        }else if(tempActual < tempBaja){
            tempBaja = tempActual;
        }
        
        sumaTemp += tempActual;

    }
    tempMedia = (sumaTemp)/6;

    cout <<"=============================================";
    cout <<"\nLa temperatura mas alta fue: " <<tempAlta;
    cout <<"\nLa temperatura mas baja fue: " <<tempBaja;
    cout <<"\nLa temperatura promedia fue: " <<tempMedia <<endl;

    system("pause");
    return 0;
}