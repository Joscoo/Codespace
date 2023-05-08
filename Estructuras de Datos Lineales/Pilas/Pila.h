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
    if(Pila :: getTop() == -1){
        return true;
    }else{
        return false;
    }
}
bool Pila::pilaLlena(){
    if(Pila::getTop() == EXT - 1){
        return true;
    }else{
        return false;
    }
}

void Pila::push(Tipo valor){}
Tipo Pila::pop(){}



