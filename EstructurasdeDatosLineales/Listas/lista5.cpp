//Implementacion de lista que ingresa un numero y llena una lista con sus digitos   
//Jose Bonilla - 7246

#include <iostream>
#include "lista.h"
#define EXT 99
#define FIN 99999
using namespace std;

int main(){
    system("color 02");
    
    void ingresarNumeros(int num[], int *n1);
    void imprimirNumeros(int num[], int n1);
    void generarListas(int num[], Lista l[], int n1);
    void imprimirListas(int num[], Lista l[], int n1);


    Lista listas[EXT];
    int numeros[EXT];
    int n = 0;
    cout << "Ingrese valores para el vector de numeros" << endl;
    ingresarNumeros(numeros, &n);

    cout << "Elementos " << n << endl;

    cout << "Elementos del vector" << endl;
    imprimirNumeros(numeros, n);

    generarListas(numeros, listas, n);

    cout << endl << "Listas " << endl;
    imprimirListas(numeros, listas, n);


    system("pause");
    return 0;
}

void ingresarNumeros(int num[], int *n1){
        int valor;
        do{
            cout << "Ingrese un numero entero (SALGA CON "<< FIN << " )" << endl;
            cin >> valor;

            if(valor != FIN && *n1 < EXT){
                num[*n1] = valor;
                (*n1)++;
            }
        }while(valor != FIN && *n1 < EXT);
}

void imprimirNumeros(int num[], int n1){
    for(int i = 0; i < n1; i++){
        cout << endl << "> " << num[i] << endl;
    }
}

void generarListas(int num[], Lista l[], int n1){
    int aux;
    for(int i = 0; i < n1; i++){
        aux = num[i];
        do{
            l[i].insertarInicio(aux%10);
            aux /= 10;
        }while(aux != 0);
    }
}

void imprimirListas(int num[], Lista l[], int n1){
    for(int i = 0; i < n1; i++){
        cout << endl << "> " << num[i] << endl;

        Nodo *act = l[i].getPrimero();
        while(act != NULL){
            cout << endl << "\t" << " > " << act->getDato() << endl;
            act = act->getPunt();
        }
    }
}