//Determinar si el valor ingresado en la cola es una capicua
// Jose Bonilla - 7246

#include <iostream>
#include "colaCircular.h"

#define FINAL 99999

using namespace std;

int main(){
    system("color 02");
    
    ColaCircular c;
    void llenarCola(ColaCircular *c);
    void mostrarCola(ColaCircular c, int i = 0);
    bool esCapicua(ColaCircular c);
    
    cout << endl << "Ingreso de valores para la cola" << endl;
    llenarCola(&c);
    cout << "Los elementos de la Cola son:" << endl;
    mostrarCola(c);
    cout << endl;
    system("pause");
    return 0;
}


bool esCapicua(Tipo valor){
    int numeroReverso = 0;
    int numeroOriginal = valor;

    while (valor != 0) {
        int digito = valor % 10;
        numeroReverso = numeroReverso * 10 + digito;
        valor /= 10;
    }

    return (numeroOriginal == numeroReverso);
}

void mostrarCola(ColaCircular c, int i = 0){    
    if(!c.colaVacia()){
        Tipo aux = c.quitar();
        cout << endl << "[ " << i + 1 <<" ] " << "El valor: " << aux << (esCapicua(aux)? " Si " : " No ") << "es Capicua" << endl;
        mostrarCola(c, i+1);
    }
}

void mostrarColaCapicua(ColaCircular c, int i = 0){    
    if(!c.colaVacia()){
        cout << endl << "[ " << i + 1 <<" ] " << c.quitar() << endl;
        mostrarCola(c, i+1);
    }
}

void llenarCola(ColaCircular *c){
    Tipo valor;
    
    cout << "Ingrese el valor para agregarlo a la Cola (Digite 99999 para salir)" << endl;
    cin >> valor;

    if(valor != FINAL){
        if(!c->colaLlena()){
            c->insertar(valor);
            llenarCola(c);
        }else{
            cout << "Cola llena..." << endl;
        }
    }
    
}