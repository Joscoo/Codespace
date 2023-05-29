using namespace std;
#include <iostream>
#include "lista.h"
#define EXT 99999

int main(){
    system("color 02");
    Lista l;
    void ingresarLista(Lista *l1);
    void imprimirLista(Lista l1);
    void buscarEnLista(Lista l1);

    cout << "Valores a ingresar en la lista : " << endl; 
    ingresarLista(&l);
    cout << "Valores ingresados en la lista : " << endl;
    imprimirLista(l);

    buscarEnLista(l);


    system("pause");
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

void buscarEnLista(Lista l1){
    Tipo aux;
    Nodo* enc;

    cout << endl << "Ingrese un valor a buscar en la lista : " << endl;
    cin >> aux;

    enc = l1.buscarElemento(aux);

    cout << endl << "El valor " << aux << (enc == NULL ? " no " : " si ") << "esta en la lista" << endl;
}