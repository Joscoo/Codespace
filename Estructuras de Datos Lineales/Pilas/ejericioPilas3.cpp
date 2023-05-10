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
    int n;

    void leerPila(Pila *p1);
    void imprimirPila(Pila p1);
    void amplificarPila(Pila *p1, int valor);

    leerPila(&pila1);
    cout << endl << "Ingrese un valor para amplificar la pila" << endl;
    cin >> n;

    amplificarPila(&pila1,n);
    cout << endl;
    system("pause");
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
void imprimirPila(Pila p1){}
void amplificarPila(Pila *p1, int valor){}