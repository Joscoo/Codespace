//Jose Bonilla - 7246

using namespace std;

#include <iostream>
#include "vertice.h"
#include "utilities.h"


void leerVerticesRecursivo(Vertice v1[], int n1){
    Tipo aux;
    if(n1 < 0){
        return;
    } 
    leerVerticesRecursivo(v1, n1-1);
    cout << endl << "Ingrese un valor a ingresar en el vertice " << n1 << " :";
    cin >> aux;
    v1[n1].setDato(aux);
    v1[n1].setNum(n1); 
}

void mostrarVerticesRecursivo(Vertice v1[], int n1){
    if(n1 < 0){
        return;
    }
    mostrarVerticesRecursivo(v1, n1-1);
        cout << endl << "Valor en el vertice " << v1[n1].getNum() << " :" << v1[n1].getDato() << endl; 

}

void buscarVertices(Vertice v1[], int n1){
    Tipo aux;
    cout << "Ingrese un valor a buscar" << endl;
    cin >> aux;
    cout << "El valor " << (encontrarVertice(v1,n1,aux)? "si " : "no ") << "se encontro" << endl;
    encontrarVertice(v1,n1,aux);
}

bool encontrarVertice(Vertice v1[], int n1, Tipo val){
    if(n1 < 0){
        return false;
    }

    if(val == v1[n1].getDato()){
        return true;
    }
    encontrarVertice(v1, n1-1, val);
}

int main(){
    system("color 02");

    int n;
    Vertice *v;

    cout << "Cantidad de elementos : " << endl;
    n = leerN();

    v = new Vertice[n];

    leerVerticesRecursivo(v, n);
    mostrarVerticesRecursivo(v,n);

    return 0;
}
