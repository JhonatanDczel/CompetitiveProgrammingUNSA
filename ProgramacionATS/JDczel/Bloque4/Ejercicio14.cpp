/*14. En una clase de 5 alumnos se han realizado tres ex�menes y se requiere 
determinar el n�mero de: 
	a) Alumnos que aprobaron todos los ex�menes.
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron �nicamente el �ltimo examen.
	
Realice un programa que permita la lectura de los datos y el c�lculo de las 
estad�sticas.
*/
#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
    int A=1, exam1, exam2, exam3, ap = 10.5, at=0, a1=0, au=0;

    for(A; A<=5; A++){
        cout <<endl <<"ALUMNO NUMERO " <<A <<endl;
        cout <<A <<". " <<"Digite la primera nota: "; cin >>exam1;
        cout <<A <<". " <<"Digite la segunda nota: "; cin >>exam2;
        cout <<A <<". " <<"Digite la tercera nota: "; cin >>exam3;
        cout <<endl <<"================================" <<endl;

        if(exam1>ap && exam2>ap && exam3>ap){
            at+=1;
        }
        if(exam1<ap && exam2<ap && exam3>ap){
            au+=1;
        }
        if((exam1>ap or exam2>ap or exam3>ap)){
            a1+=1;
        }
    }
    cout <<"Los alumnos que aprobaron todos los examenes son: " <<at <<endl;
    cout <<"Los alumnos que aprobaron al menos un examen: " <<a1 <<endl;
    cout <<"Los alumnos que aprobaron el ultimo examen: " <<au <<endl;
    return 0;
}