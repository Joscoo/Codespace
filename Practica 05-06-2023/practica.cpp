/*Elaborar un programa recursivo que permita modificar el orden de los elementos de una lista ingresada, 
de forma que los N últimos nodos pasen a ser los primeros. */
/* Ejemplo:
Lista: 1 -> 2 -> 3 -> 4 -> 5 -> 6.
Si N = 4 (los cuatro últimos elementos pasan a ser los primeros)
Lista: 3 -> 4 -> 5 -> 6 -> 1 -> 2*/
//Jose Bonilla 7246

#include <iostream>
#include "lista.h"

#define EXT 99999

using namespace std;

int main(){

    Lista lista1;
    int n;

    void ingresarLista(Lista *l1);
    void imprimirLista(Lista l1, Nodo *act);
    void modificarOrden(Lista *lista, int N);



    cout << endl << "Datos a Ingresar en lista" << endl;
    ingresarLista(&lista1);

    cout << endl << "Datos almacenados en la lista" << endl;
    imprimirLista(lista1, lista1.getPrimero());

    cout << endl << "Ingrese el el numero de elementos a modificar: " << endl;
    cin >> n;

    cout << endl << "Lista modificada" << endl;
    modificarOrden(&lista1, n);
    imprimirLista(lista1, lista1.getPrimero());

}

void ingresarLista(Lista *l1){
    Tipo aux;

    cout << endl << "Ingrese un valor para la lista (" << EXT << " para terminar) : " << endl; 
    cin >> aux;
    
    if(aux != EXT){
        l1->insertarFinal(aux);
        ingresarLista(l1);
    }

}

void imprimirLista(Lista l1, Nodo *act){
    if(act == NULL){
        return;
    }
    if(act != NULL){
        cout << endl << act->getDato() << endl;
        imprimirLista(l1, act->getPunt());
    }
}

void modificarOrden(Lista *lista, int N) {
    if (lista->esVacia() || N <= 0){
        return;
    }

    Nodo* actual = lista->getPrimero();
    Nodo* anteriorUltimo = NULL;
    Nodo* nuevoPrimero = NULL;
    int contador = 0;

    while (actual != NULL && contador < N) {
        anteriorUltimo = actual;
        actual = actual->getPunt();
        contador++;
    }

    if (contador < N) {
        return;
    }

    nuevoPrimero = actual;

    while (actual != NULL && actual->getPunt() != NULL) {
        actual = actual->getPunt();
    }

    actual->setPunt(lista->getPrimero());

    lista->setPrimero(nuevoPrimero);

    anteriorUltimo->setPunt(NULL);
}





