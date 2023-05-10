/*Ingreso de valores en una pila y comprobar si estan ordenados*/
//Jose Bonilla - 7246

#include <iostream>
#include "CreacionPilas.h"
#define FIN 99999

int main(){
    Pila p1;
    void leerPila(Pila *p1);
    void imprimirPila(Pila p1);
    bool estaOrdenada(Pila p1);

    leerPila(&p1);
    imprimirPila(p1);

    return 0;
}

void leerPila(Pila *p1){
    Tipo valor;
    cout << endl << "Ingrese un valor a apilar (INGRESE: "<< FIN <<" PARA TERMINAR)" << endl;
    cin >> valor;

    if(valor != FIN){
        p1->push(valor);
        leerPila(p1);
    }
}
void imprimirPila(Pila p1){
    if(!p1.estaVacia()){
        cout << endl << "> " << p1.pop() << endl;
        imprimirPila(p1);
    }
}

bool estaOrdenada(Pila p1){
    bool ordenadaAscendente(Pila *p1);
    bool ordenadaDescendente(Pila *p1);
    if(ordenadaAscendente(&p1)){
        return true;
    }else if(ordenadaDescendente(&p1)){
        return true;
    }else{
        return false;
    }
}


bool ordenadaAscendente(Pila *p, int menor = 9999999){
    if(p->pop() < menor){
        ordenadaAscendente(p,p->cimaPila());
        return true;
    }else{
        return false;
    }
}
bool ordenadaDescendente(Pila p1){}