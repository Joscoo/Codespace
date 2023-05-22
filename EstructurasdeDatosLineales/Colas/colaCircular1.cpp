//Implementar colas.h
//Jose Bonilla - 7246

#include <iostream>
#include "colaCircular.h"

#define FINAL 99999
using namespace std;

int main(){
    system("color 02");
    
    ColaCircular c;
    void llenarCola(ColaCircular *c);
    void mostrarCola(ColaCircular c, int i = 0);

    cout << endl << "Ingreso de valores para la cola" << endl;
    llenarCola(&c);
    cout << "La ColaCircular " << (c.colaVacia()? " SI " : " NO ") << "esta vacia" << endl;
    cout << "La ColaCircular tiene: " << c.tamanioCola() << " elementos" << endl;
    cout << "Los elementos de la ColaCircular son:" << endl;
    mostrarCola(c);
    cout << endl;
    system("pause");
    return 0;
}

void mostrarCola(ColaCircular c, int i = 0){    
    if(!c.colaVacia()){
        cout << endl << "[ " << i + 1 <<" ] " << c.quitar() << endl;
        mostrarCola(c, i+1);
    }
}

void llenarCola(ColaCircular *c){
    Tipo valor;
    
    cout << "Ingrese el valor para agregarlo a la ColaCircular (Digite 99999 para salir)" << endl;
    cin >> valor;

    if(valor != FINAL){
        if(!c->colaLlena()){
            c->insertar(valor);
            llenarCola(c);
        }else{
            cout << "ColaCircular llena..." << endl;
        }
    }
    
}

