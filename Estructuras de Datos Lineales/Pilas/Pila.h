//Definicion de Pilas
typedef int Tipo;
#define EXT 20
class Pila{
private:
    Tipo vec[EXT];
    int top;
public:
    Pila();
    void setVec(int posicion, Tipo valor);
    void setTop(int valor);
    Tipo getVec(int posicion);
    int getTop();
    bool pilaVacia();
    bool pilaLlena();
    void push(Tipo valor);
    Tipo pop();
    void vaciarPila();
    int sizePila();
    Tipo cimaPila();
};

Pila::Pila(){
    setTop(-1);
}

void Pila::setVec(int posicion, Tipo valor){
    vec[posicion] = valor;
}

void Pila::setTop(int valor){
    top = valor;
}

Tipo Pila::getVec(int posicion){
    return vec[posicion];
}

int  Pila::getTop(){
    return top;
}

bool Pila::pilaVacia(){
    if(getTop() == -1){
        return true;
    }else{
        return false;
    }
}

bool Pila::pilaLlena(){
    if(getTop() == EXT - 1){
        return true;
    }else{
        return false;
    }
}

void Pila::push(Tipo valor){
    if(!pilaLlena()){
        setTop(getTop() + 1);
        setVec(valor,getTop());
    }
}

Tipo Pila::pop(){
    Tipo aux;
    if(!pilaVacia()){
        aux = getVec(getTop());
        setTop(getTop() - 1);
        return aux;
    }
    return;
}

void Pila::vaciarPila(){
    setTop(-1);
}

int Pila::sizePila(){
    return getTop() + 1;
}

Tipo Pila::cimaPila(){
    return getVec(getTop());
}





