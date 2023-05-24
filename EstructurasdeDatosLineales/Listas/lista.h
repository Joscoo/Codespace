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


#endif // LISTA_H