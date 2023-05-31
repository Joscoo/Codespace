//Permitir el ingreso de dos listas e intercalarlas
//Jose Bonilla - 7246

#include <iostream>
#include "lista.h"
#define EXT 99999

using namespace std;

int main(){
    system("color 02");
    
    Lista lista1;
    Lista lista2;
    Lista lista3;

    void ingresarLista(Lista *l1);
    void imprimirLista(Lista l1);
    void intercalarListas(Nodo* a1, Nodo* a2, Lista *l3);

    cout << endl << "Datos a Ingresar en lista 1" << endl;
    ingresarLista(&lista1);
    
    cout << endl << "Datos a Ingresar en lista 2" << endl;
    ingresarLista(&lista2);
    
    cout << endl << "Datos almacenados en la lista 1" << endl;
    imprimirLista(lista1);

    cout << endl << "Datos almacenados en la lista 2" << endl;
    imprimirLista(lista2);

    intercalarListas(lista1.getPrimero(), lista2.getPrimero(), &lista3);
    cout << endl << "Lista Intercalada" << endl;
    imprimirLista(lista3);

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

void intercalarListas(Nodo* a1, Nodo* a2, Lista *l3){

    if(a1 == NULL && a2 == NULL){
        return;
    }

    if(a1 != NULL){
        l3->insertarFinal(a1->getDato());
        a1 = a1->getPunt();
    }

    if(a2 != NULL){
        l3->insertarFinal(a2->getDato());
        a2 = a2->getPunt();
    }
    

    intercalarListas(a1,a2,l3);
}


