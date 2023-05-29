#ifndef LISTA_H
#define LISTA_H
#define NULL __null
#include "nodo.h"

class Lista{
private:
    Nodo *primero;
public:
    Lista();
    void setPrimero(Nodo *p);
    Nodo* getPrimero();
    bool esVacia();
    void vaciarLista();
    void insertarInicio(Tipo v);
    void insertarFinal(Tipo v);
    Nodo* ultimo();

};

Lista::Lista(){
    setPrimero(NULL);
}

void Lista::setPrimero(Nodo *p){
    primero = p;
}

Nodo* Lista::getPrimero(){
    return primero;
}

bool Lista::esVacia(){
    return (getPrimero() == NULL);
}

void Lista::vaciarLista(){
    setPrimero(NULL);
}

void Lista::insertarInicio(Tipo v){
    Nodo *nuevo = new Nodo(v, getPrimero());
    setPrimero(nuevo);
}

Nodo* Lista::ultimo(){
    Nodo *act;
    act = getPrimero();
    while(act->getPunt() != NULL){
        act = act->getPunt();
    }
    return act;
}

void Lista::insertarFinal(Tipo v){
    Nodo *nuevo = new Nodo(v);
    Nodo *ult;
    if(esVacia()){
        setPrimero(nuevo);
    }else{
        ult = ultimo(); 
        ult->setPunt(nuevo);
    }
}   




#endif // LISTA_H