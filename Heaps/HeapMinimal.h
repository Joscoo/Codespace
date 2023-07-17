//Jose Bonilla - 7246

typedef int Clave;

#ifndef HEAP_MINIMAL_H
#define HEAP_MINIMAL_H

class Heap{
private:
    Clave* v;
    int nDatosMax;
    int nDatosActual;

public:
    Heap();
    Heap(int v);
    void setNDatosMax(int v);
    void setNDatosActual(int v);
    int getNDatosMax();
    int getNDatosActual();
};

    Heap::Heap(){
        setNDatosMax(0);
        setNDatosActual(0);
    }
    Heap::Heap(int v){
        setNDatosMax(v);
    }
    void Heap::setNDatosMax(int v){
        nDatosMax = v;
    }
    void Heap::setNDatosActual(int v){
        nDatosActual = v;
    }
    int Heap::getNDatosMax(){
        return nDatosMax;
    }
    int Heap::getNDatosActual(){
        return nDatosActual;
    }




#endif