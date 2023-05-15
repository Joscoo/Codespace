//Definicion de Colas
//Jose Bonilla - 7246

typedef int Tipo;
#define EXT 20

class Cola {
private:
    Tipo elementos[EXT];
    int top;
    int bottom;
public:
    Cola();
    void setElementos(Tipo valor, int posicion);
    void setTop(int valor);
    void setBottom(int valor);
    Tipo getElementos(int posicion);
    int getTop();
    int getBottom();
};

Cola::Cola(){
    setTop(-1);
    setBottom(1);
}

void Cola::setElementos(Tipo valor, int posicion){
    elementos[posicion] = valor;
}

void Cola::setTop(int valor){
    top = valor;
}

void Cola::setBottom(int valor){
    bottom = valor;
}

Tipo Cola::getElementos(int posicion){
    return elementos[posicion];
}

int Cola::getTop(){
    return top;
}

int Cola::getBottom(){
    return top;
}