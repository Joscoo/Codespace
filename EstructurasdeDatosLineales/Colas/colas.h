//Definicion de Colas
//Jose Bonilla - 7246

#ifndef _COLA_H
#define _COLA_H

typedef int Tipo;
#define EXT 20

class Cola {
private:
    Tipo elementos[EXT];
    int frente;
    int final;
    
    void setElementos(Tipo valor, int posicion);
    void setFrente(int valor);
    void setFinal(int valor);
    Tipo getElementos(int posicion);
    int getFrente();
    int getFinal();
public:
    Cola();
    void borrarCola();
    bool colaVacia();
    bool colaLlena();
    int sizeCola();
    bool enqueue(Tipo valor);
    Tipo dequeue();
    Tipo frenteCola();
};

Cola::Cola(){
    setFinal(-1);
    setFrente(0);
}

void Cola::setElementos(Tipo valor, int posicion){
    elementos[posicion] = valor;
}

void Cola::setFrente(int valor){
    frente = valor;
}

void Cola::setFinal(int valor){
    final = valor;
}

Tipo Cola::getElementos(int posicion){
    return elementos[posicion];
}

int Cola::getFrente(){
    return frente;
}

int Cola::getFinal(){
    return final;
}

void Cola::borrarCola(){
    setFinal(-1);
    setFrente(0);
}

bool Cola::colaVacia(){
    return (getFinal() < getFrente());
}

bool Cola::colaLlena(){
    return (getFinal() == (EXT -1));
}

int Cola::sizeCola(){
    return (getFinal()-getFrente()+1);
}


bool Cola::enqueue(Tipo valor){
    if(!colaLlena()){
        setFinal(getFinal()+1);
        setElementos(valor,getFinal());
        return true;
    }
    return false;
}

Tipo Cola::dequeue(){
    if(!colaVacia()){
        Tipo aux = getElementos(getFrente());
        
        setFrente(getFrente() + 1);
        return aux;
    }
}

Tipo Cola::frenteCola(){
    if(!colaVacia()){
        return getElementos(getFrente());
    }
}

#endif


