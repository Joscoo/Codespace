

#ifndef NODO_H
#define NODO_H
#include "vertice.h"

typedef Vertice Tipo;

class Nodo{
private:
    Tipo dato;
    Nodo *punt;

public:
    Nodo();
    Nodo(Tipo v);
    Nodo(Tipo v, Nodo *p);
    void setDato(Tipo v);
    void setPunt(Nodo *p);
    Tipo getDato();
    Nodo *getPunt();
};


Nodo::Nodo(){
    setPunt(NULL);
}
Nodo::Nodo(Tipo v){
    setDato(v);
    setPunt(NULL);
}
Nodo::Nodo(Tipo v, Nodo *p){
    setDato(v);
    setPunt(p);
}
void Nodo::setDato(Tipo v){
    dato = v;
}
void Nodo::setPunt(Nodo *p){
    punt = p;
}
Tipo Nodo::getDato(){
    return dato;
}
Nodo* Nodo::getPunt(){
    return punt;
}

#endif // NODO_H