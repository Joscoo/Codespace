#include <iostream>
using namespace std;


#define EXT 100
typedef int Tipo;

class Pila {
    private:
        Tipo vector[EXT];
        int top;
        void setVector(int i, Tipo dato);
        Tipo getVector(int i);

        void setTope(int top);
        int getTope();
    public:
        Pila();
        bool estaVacia();
        bool estaLlena();
        void push(Tipo dato);
        int pop();
        void vaciarPila();
        int longitudPila();
        Tipo cimaPila();
        void leerPila(Pila *p);
        void mostrarPila(Pila *p);
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

void Pila::leerPila(Pila *p) {
    Tipo fin = 99999;
    Tipo valor;

    do {
        cout << endl << "Ingrese un a apilar. finalice con " << fin << ": ";
        cin >> valor;

        if(valor == fin) {
            continue;
        }
        
        if(p->estaLlena()) {
            cout << endl << "Ya esta llena la pila";
            valor = fin;
            continue;
        }

        p->push(valor);

    } while(valor != fin);
}

void Pila::mostrarPila(Pila *p) {
    cout << endl  << "Elementos de la Pila" << endl;
    
    while(!p->estaVacia()) {
        int i = p->longitudPila();
        Tipo elemento = p->pop();

        cout << endl << "[" << i << "] > " << elemento << endl; 
    }
}

