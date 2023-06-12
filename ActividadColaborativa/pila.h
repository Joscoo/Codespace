#ifndef PILA_H
#define PILA_H

#include <iostream>
using namespace std;


#define EXT 100
typedef int Tipo;

class Pila {
    private:
        Tipo vector[EXT];
        int top;
    public:
        void setVector(int i, Tipo dato);
        Tipo getVector(int i);
        void setTope(int top);
        int getTope();
        Pila();
        bool estaVacia();
        bool estaLlena();
        void push(Tipo dato);
        int pop();
        void vaciarPila();
        int longitudPila();
        Tipo cimaPila();

};


void Pila::setVector(int i, Tipo dato) {
    vector[i] = dato;
}

Tipo Pila::getVector(int i) {
    return vector[i];
}

void Pila::setTope(int dato) {
    top = dato;
}

int Pila::getTope() {
    return top;
}


Pila::Pila() {
    setTope(-1);
}

bool Pila::estaVacia() {
    return getTope() == -1;
}

bool Pila::estaLlena() {
    return getTope() == EXT - 1;
}

void Pila::push(Tipo valor) {
    if(!estaLlena()) {
        setTope(getTope()+1);

        setVector(getTope(), valor);
    } else {
        cout << "La pila esta llena" << endl;
    }
}

Tipo Pila::pop() {
    Tipo valor;

    if(!estaVacia()) {
        valor = getVector(getTope());

        setTope(getTope()-1);
    }

    return valor;
}

void Pila::vaciarPila() {
    setTope(-1);
}

int Pila::longitudPila() {
    return getTope() + 1;
}

Tipo Pila::cimaPila() {
    if(!estaVacia()) {
        return getVector(getTope());
    } else {
        return -1;
    }
}

#endif

