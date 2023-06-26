#ifndef VERTICE_H
#define VERTICE_H

typedef int Tipo;

class Vertice 
{
    private:

    Tipo dato;
    int num;

    public:

    Vertice();
    Vertice(Tipo v);
    Vertice(Tipo v,int n);
    void setDato (Tipo v);
    void setNum (int n);
    Tipo getDato();
    int getNum();
    bool esIgual(Tipo v);
    bool esIgualNum(int n);
};

Vertice::Vertice(){
    setNum(-1);
}

Vertice::Vertice(Tipo v){
    setDato(v);
    setNum(-1);
}

Vertice::Vertice(Tipo v, int n){
    setDato(v);
    setNum(n);
}

void Vertice::setDato (Tipo v){
    dato = v;
}

void Vertice::setNum (int n){
    num = n;
}

Tipo Vertice::getDato(){
    return dato;
}

int Vertice::getNum(){
    return num;
}

bool Vertice::esIgual(Tipo v){
    return getDato() == v;
}

bool Vertice::esIgualNum(int n){
    return getNum() == n;
}



#endif
