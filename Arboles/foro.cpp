//Programa que permite el ingreso de multiples arboles binarios de busqueda y que da opciones para buscar un valor en cualquiera de estos
//Jose Bonilla - 7246
using namespace std;
#include <iostream>
#include "ArbolBinario.h"

#define MAX 30

int main(){					
	system("color f0");
	ArbolBinario arboles[MAX];			
	
	void leerABB(ArbolBinario *a);		
	void imprimirABB(ArbolBinario a);	
    bool buscarNodoABB(ArbolBinario a);
    int realizarAccion();
    int opcMenu();
    void ingresarArbol(ArbolBinario a[], int *posicion);
    void mostrarArbol(ArbolBinario a[], int posicion);
    void buscarArbol(ArbolBinario a[], int posicion);

    int menu = 0;
    int nArboles = 0;
    int decision = 0;

    do{
        menu = opcMenu();
        switch(menu){
            case 1: 
                if(nArboles < 30){
                    ingresarArbol(arboles, &nArboles);
                    decision = realizarAccion();
                }else{
                    cout << "No se pueden ingresar mas arboles" << endl;
                    decision = 1;
                }
                break;
            case 2:
                if(nArboles > 0){
                    mostrarArbol(arboles, nArboles);
                    decision = realizarAccion();
                }else{
                    cout << "No existen arboles aun" << endl;
                    decision = 1;
                }
                break;
            case 3: 
                if(nArboles > 0){
                    buscarArbol(arboles, nArboles);
                    decision = realizarAccion();
                }else{
                    cout << "No existen arboles aun" << endl;
                    decision = 1;
                }
                break;
            default:
            decision = 1;
        }
    }while(decision == 1);
	cout << endl;
	system("pause");
}


void leerABB(ArbolBinario *a){
    Tipo aux;
    int FIN = 99999;

    do{
        cout << "Ingrese un valor, finalice con: " << FIN << endl;
        cin >> aux;

        if(aux != FIN){
            a->insertarNodo(aux);
        }
    }while(aux != FIN);
}


void imprimirABB(ArbolBinario a){
	cout << endl << "IMPRESION SIMPLE DEL ARBOL BINARIO" << endl << endl;
	a.imprimirABSimple(a.getRaiz());
	
	cout << endl << "IMPRESION JERARQUICA DEL ARBOL BINARIO" << endl << endl;
	a.imprimirABJerarquia(a.getRaiz(), 0);
}

bool buscarNodoABB(ArbolBinario a){
    Tipo aux;
    cout << "Ingrese el valor a buscar" << endl;
    cin >> aux;
    return (a.buscarNodo(aux) != NULL);
}

int realizarAccion(){
    int decision;
    do{
        cout << "Realizar otra accion? "<< endl;
        cout << "1. SI || 2. NO" << endl;
        cin >> decision;
    }while(decision > 0 && decision < 3);
    return decision;
}

int opcMenu(){
    int opc;
    do{
        cout << "Seleccione una opcion" << endl;
        cout << "1. Ingresar un Arbol" << endl;
        cout << "2. Mostrar un Arbol" << endl;
        cout << "3. Buscar un elemento en un arbol" << endl;
        cout << "Ingrese unicamente el valor numerico de la opcion" << endl;
        cin >> opc;
    }while(opc > 0 && opc < 4);
    return opc;
}

void ingresarArbol(ArbolBinario a[], int *posicion){
    cout << "Datos del Arbol" << endl;
    cout << "Arbol numero " << posicion + 1 << endl;
    leerABB(&a[*posicion]);
    posicion++;
}

void mostrarArbol(ArbolBinario a[], int posicion){
    int i;
    cout << "Que arbol desea seleccionar? (1 a "<< posicion + 1 << " )" << endl;
    cin >> i;
    imprimirABB(a[i]);
}

void buscarArbol(ArbolBinario a[], int posicion){
    int i;       
    cout << "En que arbol desea buscar? (1 a "<< posicion + 1 << " )" << endl;
    cin >> i;
    bool enc = buscarNodoABB(a[i]);
    cout << "El valor " << (enc? "SI " : "NO ") << "se encontro" << endl;
}