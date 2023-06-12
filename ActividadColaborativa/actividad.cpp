/**
* Utilizar Pila, cola y Lista
* Autor: Andres Gaibor y Jose Bonilla
*/


// Pila de estudiante (CODIGO) ej - 7255
// Cola[] de 4 Notas (Primer Parcial - Segundo Parcial - Tercer Parcial - Examen Final)
// Lista almacena la suma de las notas

#include <iostream>
#include "pila.h"
#include "Cola.h"
#include "lista.h"

#define MAX 20
#define FIN 99999

using namespace std;


void leerCodigos(Pila *cds){
    Tipo valor;
    cout << endl << "Ingrese el codigo de estudiante (INGRESE: "<< FIN <<" PARA TERMINAR)" << endl;
    cin >> valor;

    if(valor != FIN){
        cds->push(valor);
        leerCodigos(cds);
    }
}

void imprimirCodigos(Pila cds){
    if(!cds.estaVacia()){
        cout << endl << "> " << cds.pop() << endl;
        imprimirCodigos(cds);
    }
}

void ingresarLimite(Cola *c, int limite) {
    int valor;
    cout << "Ingrese la nota " << endl;
    cin >> valor;

    if(valor > limite) {
        cout << "La nota no puede ser mayor a " << limite << endl;
        ingresarLimite(c, limite);
    } else {
        c->insertar(valor);
    }
} 

void leerNotas(Cola nota[], Pila cd, int pos = 0){
    if(cd.estaVacia()){
        return;
    }

    cout << endl << "Ingrese las notas del estudiante " << cd.pop() << endl;

    cout << "Primer Parcial: " << endl;
    ingresarLimite(&nota[pos], 8);
    
    cout << "Segundo Parcial: " << endl;
    ingresarLimite(&nota[pos], 10);

    cout << "Tercer Parcial: " << endl;
    ingresarLimite(&nota[pos], 10);

    
    cout << "Examen Principal: " << endl;
    ingresarLimite(&nota[pos], 12);

    leerNotas(nota, cd, pos+1);
}

void mostrarNota(Cola n) {
    cout << "Primer Parcial: " << endl;
    cout << n.quitar() << endl;
    cout << "Segundo Parcial: " << endl;
    cout << n.quitar() << endl;
    cout << "Tercer Parcial: " << endl;
    cout << n.quitar() << endl;
    cout << "Examen Principal: " << endl;
    cout << n.quitar() << endl;

}

void mostrarNotas(Pila cds, Cola notas[], int pos = 0){
    if(cds.estaVacia()){
        return;
    }

    cout << endl << "Estudiante " << cds.pop() << endl;
    mostrarNota(notas[pos]); 
    
    mostrarNotas(cds, notas, pos+1);
}

void sumarNotas(Cola notas[], Lista *suma, int pos = 0){
    if(notas[pos].colaVacia()){
        return;
    }

    int notaFinal = notas[pos].quitar() + notas[pos].quitar() + notas[pos].quitar() + notas[pos].quitar();
    suma->insertarFinal(notaFinal);

    sumarNotas(notas, suma, pos+1);
}


void mostrarSumaNotas(Pila cds, Nodo * inc){
    if(inc == NULL){
        return;
    }

    cout << "Estudiante " << cds.pop() << endl;
    cout << "Suma de notas: " << inc->getDato() << endl << endl;
    mostrarSumaNotas(cds, inc->getPunt());
}


int main() {
    system("color 02");
    Pila codigos;
    Cola notas[MAX];
    Lista sumaNotas;

    cout << "Ingrese los codigos de los estudiantes" << endl;
    leerCodigos(&codigos);
    cout << endl << "Los codigos ingresados son: " << endl;
    imprimirCodigos(codigos);

    cout << endl << "Ingrese las notas de los estudiantes" << endl;
    leerNotas(notas, codigos); // si se esta en nota
    cout << endl << "Las notas ingresadas son: " << endl;
    mostrarNotas(codigos, notas);

    cout << "Elementos " << sumaNotas.longitudLista() << endl;
    cout << endl << "La suma de las notas es: " << endl;

    sumarNotas(notas, &sumaNotas);
    mostrarSumaNotas(codigos, sumaNotas.getPrimero());

    system("pause");
    return 0;
}