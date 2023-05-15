//Definicion de Colas
//Jose Bonilla - 7246

typedef int Tipo;
#define EXT 20

class Cola {
private:
    Tipo elementos[EXT];
    int frente;
    int final;
public:
    Cola();
    void setElementos(Tipo valor, int posicion);
    void setFrente(int valor);
    void setFinal(int valor);
    Tipo getElementos(int posicion);
    int getFrente();
    int getFinal();
    void borrarCola();
    bool colaVacia();
    bool colaLlena();
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
