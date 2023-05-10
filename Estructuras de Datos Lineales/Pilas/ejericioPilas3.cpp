/*Programa que haga la lectura de elemmentos de una pila y multiplique sus valores con un
valor ingresado por el Usuario*/
// Jose Bonilla - 7246

#include <iostream>
#include "CreacionPilas.h"
#define FIN 99999
using namespace std;

int main(){
    system("color 02");
    Pila pila1;
    Pila pilaAux;
    int n;

    void leerPila(Pila *p1);
    void imprimirPila(Pila p1);
    void amplificarPila(Pila *p1, Pila *p2, int valor);

    leerPila(&pila1);
    cout << endl << "Ingrese un valor para amplificar la pila" << endl;
    cin >> n;

    amplificarPila(&pila1, &pilaAux, n);
    imprimirPila(pila1);
    cout << endl;
    // system("pause");
    return 0;
}


void leerPila(Pila *p1){
    Tipo valor;
    cout << endl << "Ingrese un valor a apilar (INGRESE: "<< FIN <<" PARA TERMINAR)" << endl;
    cin >> valor;

    if(valor != FIN){
        p1->push(valor);
        leerPila(p1);
    }
}
void imprimirPila(Pila p1){
    if(!p1.estaVacia()){
        cout << endl << "> " << p1.pop() << endl;
        imprimirPila(p1);
    }
}
void amplificarPila(Pila *p1, Pila *p2, int valor){
    if(!p1->estaVacia()){
        p2->push(p1->pop()*valor);
        amplificarPila(p1, p2, valor);
        p1->push(p2->pop());
    }
}