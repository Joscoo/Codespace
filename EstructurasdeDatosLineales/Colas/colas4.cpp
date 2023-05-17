//Determinar si las colas a y b estan mutuamente contenidas
//Jose Bonilla - 7246

#include <iostream>
#include "colas.h"

#define FINAL 99999
using namespace std;

int main(){
    system("color 02");

    Cola cola1, cola2;

    void llenarCola(Cola *c);
    void mostrarCola(Cola c, int i = 0);
    bool estaEnCola(Cola c, Tipo valor);
    bool colaContenida(Cola a, Cola b);
    bool colasMutuamenteContenidas(Cola a, Cola b);

    cout << endl << "Cola base" << endl;
    llenarCola(&cola1);
    cout << endl << "Datos de la cola" << endl;
    mostrarCola(cola1);

    cout << endl << "Cola a buscar" << endl;
    llenarCola(&cola2);
    cout << endl << "Datos de la cola" << endl;
    mostrarCola(cola2);

    cout << endl << "Las colas A y B " << (colasMutuamenteContenidas(cola1, cola2)? " SI ": " NO ") << "estan mutuamente contenidas" << endl;

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

bool colaContenida(Cola a, Cola b){
    while(!a.colaVacia()){
        if(!estaEnCola(b, a.dequeue())){
            return false;
        }
    }
    return true;
}

bool colasMutuamenteContenidas(Cola a, Cola b){
    return colaContenida(a, b) && colaContenida(b, a);
}