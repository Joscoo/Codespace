//Programa que compara si n pilas son iguales
//Jose Bonilla - 7246
#include <iostream>
#include "CreacionPilas.h"
#define EXTPILAS 10
using namespace std;
int main(){
    system("color 02");
    Pila pilas[EXTPILAS];
    int n;
    void leerPilas(Pila *pilas1, int n);
    bool compararPilas(Pila *pilas1, int n, int i = 0);
    void mostrarNPilas(Pila *pilas1, int n);

    cout << "Ingrese el numero de pilas:" << endl;
    cin >> n;

    leerPilas(pilas,n);

    cout << "Las pilas " << (compararPilas(pilas,n)? "son":"no son") << " iguales" << endl;
    cout << "Informacion almacenada en las: " << n << " pilas" <<endl;
    mostrarNPilas(pilas, n);
    system("pause");
    return 0;
}

void leerPilas(Pila *pilas1, int n){
    for(int i = 0; i < n ; i++){
        pilas1->leerPila(&pilas1[i]);
    }
}

bool compararPilas(Pila *pilas1, int n, int i = 0){
    bool compararDosPilas(Pila p1, Pila p2);
    do{
        if(!compararDosPilas(pilas1[i],pilas1[i+1])){
            return false;
        }else{
            i++;
            if(i == n - 1){
                return true;
            }
        }
    }while(i < n);
}

bool compararDosPilas(Pila p1, Pila p2) {
    if(p1.longitudPila() != p2.longitudPila()) {
        return false;
    }

    if(p1.estaVacia()) {
        return true;
    }

    if(p1.pop() != p2.pop()) {
        return false;
    }

    return compararDosPilas(p1, p2);
}

void mostrarNPilas(Pila *pilas1, int n){
    for(int i = 0; i < n; i++){
        pilas1->mostrarPila(&pilas1[i]);
    }
}
