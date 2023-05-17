//Implementar colas.h
//Jose Bonilla - 7246

#include <iostream>
#include "colas.h"

#define FINAL 99999
using namespace std;

int main(){
    system("color 02");
    
    Cola c;
    void llenarCola(Cola *c);
    void mostrarCola(Cola c, int i = 0);

    cout << endl << "Ingreso de valores para la cola" << endl;
    llenarCola(&c);
    cout << "La cola " << (c.colaVacia()? " SI " : " NO ") << "esta vacia" << endl;
    cout << "La cola tiene: " << c.sizeCola() << " elementos" << endl;
    cout << "Los elementos de la cola son:" << endl;
    mostrarCola(c);
    cout << endl;
    system("pause");
    return 0;
}

void mostrarCola(Cola c, int i = 0){    
    if(!c.colaVacia()){
        cout << endl << "[ " << i + 1 <<" ] " << c.dequeue() << endl;
        mostrarCola(c);
    }
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

