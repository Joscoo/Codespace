#include <iostream>
#include "lista.h"

void modificarOrden(Lista& lista, Nodo* actual, int N, int& contador) {
    if (actual == NULL) {
        return;
    }

    modificarOrden(lista, actual->getPunt(), N, contador);

    if (contador < N) {
        contador++;
        lista.insertarInicio(actual->getDato());
        lista.eliminarNodo(actual->getDato());
    }
}

int main() {
    Lista lista;
    lista.insertarFinal(1);
    lista.insertarFinal(2);
    lista.insertarFinal(3);
    lista.insertarFinal(4);
    lista.insertarFinal(5);
    lista.insertarFinal(6);

    int N = 4;
    std::cout << "Lista original: ";
    Nodo* nodo = lista.getPrimero();
    while (nodo != NULL) {
        std::cout << nodo->getDato() << " -> ";
        nodo = nodo->getPunt();
    }
    std::cout << "NULL" << std::endl;

    int contador = 0;
    modificarOrden(lista, lista.getPrimero(), N, contador);

    std::cout << "Lista modificada: ";
    nodo = lista.getPrimero();
    while (nodo != NULL) {
        std::cout << nodo->getDato() << " -> ";
        nodo = nodo->getPunt();
    }
    std::cout << "NULL" << std::endl;

    return 0;
}
