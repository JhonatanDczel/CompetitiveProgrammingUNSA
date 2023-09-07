//Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout <<"Escriba tres numeros para comparar: ", cin >>a >>b >>c;
    if(a>b)
    {
        if(a>c)
        {
            cout <<"\nEl numero mayor es: " <<a;
        }
        else
        {
            cout <<"\nEl numero mayor es: " <<c;
        }
    }
    else if(b>c)
    {
        cout <<"\nEl mayor numero es: " <<b;
    }
    else
    {
        cout <<"\nEl mayor numero es: " <<c;
    }
    return 0;
}