//Programa que debe ingresar ordenadamente los valores en una cola
//Jose Bonilla - 7246

#include <iostream>
#include "colas.h"

#define FINAL 99999
using namespace std;

int main(){
    system("color 02");

    Cola cola1, colaAux;

    void llenarCola(Cola *c, Cola *aux);
    void mostrarCola(Cola c, int i = 0);

    cout << endl << "Cola base" << endl;
    llenarCola(&cola1,&colaAux);
    cout << endl << "Datos de la cola" << endl;
    mostrarCola(cola1);

    system("pause");
    return 0;
}

void llenarCola(Cola *c, Cola *aux){
    void llenarColaPrincipal(Cola *cola1, Cola colaAux);
    Tipo valor;

    cout << "Ingrese el valor para agregarlo a la cola (Digite 99999 para salir)" << endl;
    cin >> valor;

    if(valor != FINAL){
        if(!c->colaLlena()){
            if(valor > c->frenteCola()){
                aux->enqueue(valor);
                llenarCola(c,aux);
            }else{
                c->enqueue(valor);
                llenarCola(c,aux);}
        }else{
            cout << "Cola llena..." << endl;
        }
    }
    llenarColaPrincipal(c,*aux);
}

void mostrarCola(Cola c, int i = 0){
    if(!c.colaVacia()){
        cout << endl << "[ " << i + 1 <<" ] " << c.dequeue() << endl;
        mostrarCola(c, i + 1);
    }
}

void llenarColaPrincipal(Cola *cola1, Cola colaAux){
    if(!colaAux.colaVacia()){
        cola1->enqueue(colaAux.dequeue());
        llenarColaPrincipal(cola1,colaAux);
    }
}