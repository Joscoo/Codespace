//Determinar la cantidad de nodos de una lista recursivamente
//Jose Bonilla - 7246

#include <iostream>
#include "lista.h"
#define EXT 99999

using namespace std;

int main(){
    system("color 02");
    
    Lista lista1;

    int contarNodos(Nodo* act);
    void ingresarLista(Lista *l1);
    void imprimirLista(Lista l1);

    cout << "Datos a Ingresar en lista" << endl;
    ingresarLista(&lista1);
    
    cout << "Datos almacenados en la lista" << endl;
    imprimirLista(lista1);

    cout << endl << "La lista tiene: " << contarNodos(lista1.getPrimero()) << " valores" << endl;

    system("system");
    return 0;
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

void imprimirLista(Lista l1){
    Nodo *act;
    act = l1.getPrimero();

    while(act != NULL){
        cout << endl << act->getDato() << endl;
        act = act->getPunt();
    }
}

int contarNodos(Nodo* act){
    if(act != NULL){
        return 1 + contarNodos(act->getPunt());
    }

    return 0;
}
