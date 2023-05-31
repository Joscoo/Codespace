//Invertir el orden de los nodos de una lista
//Jose Bonilla - 7246

//Determinar la cantidad de nodos de una lista recursivamente
//Jose Bonilla - 7246

#include <iostream>
#include "lista.h"
#define EXT 99999

using namespace std;

int main(){
    system("color 02");
    
    Lista lista1;

    void ingresarLista(Lista *l1);
    void imprimirLista(Lista l1);
    void invertirLista(Lista *l1);

    cout << "Datos a Ingresar en lista" << endl;
    ingresarLista(&lista1);
    
    cout << "Datos almacenados en la lista" << endl;
    imprimirLista(lista1);

    invertirLista(&lista1);
    cout << "Lista Invertida" << endl;
    imprimirLista(lista1);

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

void invertirLista(Lista *l1){
    Nodo *act;
    act = l1->getPrimero();

    while(act != NULL){
        cout << endl << act->getDato() << endl;
        act = act->getPunt();
    }
}
