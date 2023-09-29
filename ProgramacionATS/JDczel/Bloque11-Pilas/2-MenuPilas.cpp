#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

// prototipo
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);
void opc1(Nodo *&);
void opc2(Nodo *&);
void opc3(Nodo *);

int main(){
    int rpt;
	Nodo *pila = NULL;

    do{
        cout<<"\n\t\tSeleccionar del menu."<<endl;
        cout<<"1.Insertar un caracter a la pila."<<endl;
        cout<<"2.Eliminar los elementos de la pila."<<endl;
        cout<<"3.Mostrar todos los elementos de la pila"<<endl;
        cout<<"4.Salir.\n\n";
        cout<<"Respuesta:\t";
        cin>>rpt;

        switch (rpt)
        {
        case 1: opc1(pila);
            break;
        case 2: opc2(pila);
            break;
        case 3: opc3(pila);
            break;
        case 4:
            break;
        }
    }while(rpt != 4);

    cout<<"\n\t\t--GRACIAS--\n";

	system("pause");
	return 0;
}

void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\n\tEl elemento "<<n<<" se agrego a pila correctamente.\n";
}

void sacarPila(Nodo *&pila,int &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

void opc1(Nodo *&pila)
{
    int dato;
    cout<<"\nDigitame un numero: ";
    cin>>dato;
    agregarPila(pila,dato);
}

void opc2(Nodo *&pila)
{
    int dato;
    cout<<"\nAhora, sacaremos los elementos de pila: ";
    while(pila != NULL){
        sacarPila(pila,dato);
        if(pila!=NULL){
            cout<<dato<<" , ";
        } else{
            cout<<dato<<".";
        }
    }
    cout<<"\n";
}

void opc3(Nodo *pila)
{
    cout<<"\nLos valores que tiene la pila son: ";
    Nodo *temp = pila;

     while (temp != NULL) {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout<<endl;
}
