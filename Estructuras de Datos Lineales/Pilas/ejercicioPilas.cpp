#include <iostream>
#include "Pila.h"

using namespace std;

int main(){
    // system("color 02");
    Pila p;
    
    void leerPila(Pila *p1);
    void mostrarPila(Pila p1);

    leerPila(&p);
    mostrarPila(p);

    // system("Pause");
    return 0;
}

void leerPila(Pila *p1){
    Tipo valor;
    int opc = 2;
    do{
        if(!p1->pilaLlena()){
            cout << "Ingrese un valor para la pila" << endl;    
            cin >> valor;
            p1->push(valor);
            cout << endl << "Desea seguir ingresando valores?" << endl;
            cout << "1. Si || 2. No (Ingrese 1 o 2)" << endl;
            cin >> opc; 
        }else{
            cout << endl << "La pila esta llena" << endl;
            opc = 2;
        }
    }while(opc == 1);
}

void mostrarPila(Pila p1){
    Tipo aux;
    while(!p1.pilaVacia()){
        if(!p1.pilaVacia()){
            aux = p1.pop();
            cout << endl << "El valor es: "<< aux << endl;
        }
    }
}
