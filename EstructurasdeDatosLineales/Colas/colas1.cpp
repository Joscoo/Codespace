//Determinar si un valor esta en la cola
//Jose Bonilla - 7246

#include <iostream>
#include "colas.h"

#define FINAL 99999
using namespace std;

int main(){
    system("color 02");

    Cola cola1;
    Tipo valBuscar;

    void llenarCola(Cola *c);
    void mostrarCola(Cola c, int i = 0);
    bool estaEnCola(Cola c, Tipo valor);

    cout << endl << "Cola base" << endl;
    llenarCola(&cola1);
    cout << endl << "Datos de la cola" << endl;
    mostrarCola(cola1);

    cout << endl << "Ingrese el valor a buscar" << endl;
    cin >> valBuscar;

    cout << endl << "El valor: " << valBuscar << (estaEnCola(cola1, valBuscar)? " SI ": " NO ") << "esta en la cola" << endl;

    system("pause");
    return 0;
}


void llenarCola(Cola *c){
    Tipo valor;

    cout << "Ingrese el valor para agregarlo a la cola (Digite 99999 para salir)" << endl;
    cin >> valor;

    if(valor != FINAL){
        if(!c->colaLlena()){
            c->enqueue(valor);
            llenarCola(c);
        }else{
            cout << "Cola llena..." << endl;
        }
    }
}

void mostrarCola(Cola c, int i = 0){
    if(!c.colaVacia()){
        cout << endl << "[ " << i + 1 <<" ] " << c.dequeue() << endl;
        mostrarCola(c, i + 1);
    }
}

bool estaEnCola(Cola c, Tipo valor){
    while(!c.colaVacia()){
        if(c.dequeue() == valor){
            return true;
        }
    }
    return false;
}
