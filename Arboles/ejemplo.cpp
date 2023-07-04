#include <iostream>
#include "ArbolBinario.h"

using namespace std;

void leerABB(ArbolBinario *b){
    Tipo aux;
    int FIN = 99999;

    do{
        cout << "Ingrese un valor, finalice con: " << FIN << endl;
        cin >> aux;

        if(aux != FIN){
            b->insertarNodo(aux);
        }
    }while(aux != FIN);
}


void imprimirABB(ArbolBinario a){
	cout << endl << "IMPRESION SIMPLE DEL ARBOL BINARIO" << endl << endl;
	a.imprimirABSimple(a.getRaiz());	//llama metodo impresion simple de AB
	
	cout << endl << "IMPRESION JERARQUICA DEL ARBOL BINARIO" << endl << endl;
	a.imprimirABJerarquia(a.getRaiz(), 0);	//llama a metodo impresion con formato jerarquico de AB
}



int main() {
    system("color 02");
    ArbolBinario arbol1;
    ArbolBinario arbol2;
    ArbolBinario arbol3;
    ArbolBinario arbolResultado;


  cout << "Datos del Arbol 1:" << endl;
    leerABB(&arbol1);
  cout << "Datos del Arbol 2:" << endl;
    leerABB(&arbol2);
  cout << "Datos del Arbol 3:" << endl;
    leerABB(&arbol3);



    cout << "Árbol resultado:" << endl;
    
    system("pause");
    return 0;
}
