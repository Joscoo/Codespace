#ifndef LISTA_H
#define LISTA_H

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
    bool buscar(Tipo v);
    Nodo* buscarElemento(Tipo v);
    bool eliminarNodo(Tipo v);
    void insertarEnOrden(Tipo v);
    Nodo* anterior(Nodo *p);
    int contarElementos();
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
    if(!esVacia()){
        while(act->getPunt() != NULL){
            act = act->getPunt();
        }
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

bool Lista::buscar(Tipo v){
    Nodo *act;
    act = getPrimero();
    while(act != NULL && act->getDato() != v){
        act = act->getPunt();
    }
    return (act != NULL);
}

Nodo* Lista::buscarElemento(Tipo v){
    Nodo *act;
    act = getPrimero();
    while(act != NULL && act->getDato() != v){
        act = act->getPunt();
    }
    return act;
}

bool Lista::eliminarNodo(Tipo v){
    Nodo* act;
    Nodo* enc = buscarElemento(v);

    if(enc == NULL){
        return false;
    }

    if(enc == getPrimero()){
        setPrimero(enc->getPunt());
    }else{
        act = getPrimero();
        while(act ->getPunt() != enc){
            act = act->getPunt();
        }
        act->setPunt(enc->getPunt());
    }

    return true;
}


void Lista::insertarEnOrden(Tipo v){
    Nodo* nuevo;
    Nodo* act;
    Nodo* ant;
    nuevo = new Nodo(v);

    if(esVacia()){
        setPrimero(nuevo);
    }else{
        ant = act = getPrimero();                  //iniciamos con la direccion apuntada por inicio de lista

        while((act != NULL ) && (act -> getDato()) < v){        //Recorer hasta la posicion anterior a la que el puntero del nodo apunta a NULL
            ant = act;
            act = act->getPunt();
        }
        if(act == ant){
            nuevo -> setPunt(getPrimero());
            setPrimero(nuevo);                          //el nuevo nodo va a ser el nuevo primero de la lista
        
        }else{
            //actualizar de apuntadores

            ant -> setPunt(nuevo);
            nuevo -> setPunt(act);
        }
        
    }

}

Nodo* Lista::anterior(Nodo *p){
    Nodo* act;
    Nodo* ant;
    act = getPrimero();
    ant = NULL;
    while((act != NULL) && (act != p)){
        ant = act;
        act = act->getPunt();
    }
    return ant;
}

int Lista::contarElementos(){
    Nodo* act;
    int cont = 0;
    act = getPrimero();
    while(act != NULL){
        cont++;
        act = act->getPunt();
    }
    return cont;
}

#endif // LISTA_H