//Implementacion de un arbol binario de busqueda
using namespace std;
#include <iostream>
#include "ArbolBinario.h"

int main(){					//programa principal
	system("color f0");
	ArbolBinario a;			//declara un árbol binario
	
	void leerABB(ArbolBinario *b);		//prototipo de funcion ingreso AB
	void imprimirABB(ArbolBinario a);	//prototipo de funcion que imprime AB
    bool buscarNodoABB(ArbolBinario a);
	
	leerABB(&a);							//llamado a funcion de ingreso AB
	imprimirABB(a);						//llamado a funcion que imprime un AB
    bool enc = buscarNodoABB(a) ;

    cout << "El valor " << (enc? "SI " : "NO ") << "se encontro" << endl;
	cout << endl;
	system("pause");
}


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

bool buscarNodoABB(ArbolBinario a){
    Tipo aux;
    cout << "Ingrese el valor a buscar" << endl;
    cin >> aux;
    return (a.buscarNodo(aux) != NULL);
}