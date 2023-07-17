/*Elabore un programa en C++ que permita el ingreso de un grafo, y 
determine si al recorrer sus vértices (tanto en anchura como en profundidad) 
se encuentran ordenados (ascendente o descendentemente)*/
//Jose Bonilla - 7246

using namespace std;
#include <iostream>
#include "utilidades.h"
#include "RecorreGrafo.h"

int main(){
	system("color 02");							
	GrafoMatriz g;								
	int n;										
	
	GrafoMatriz ingresarVertices(int n1);
	void ingresarArcos(GrafoMatriz *g);			
	void recorrerGrafo(GrafoMatriz g);			
	void imprimirGrafo(GrafoMatriz g);			

    //Para la resolucion de la practica se modifico el archivo de cabecera RecorreGrafo.h

	
	cout << endl << "CANTIDAD DE VERTICES DEL GRAFO" << endl;
	n = leerN(1,20);						
	cin.ignore();
	
	g = ingresarVertices(n);					
	ingresarArcos(&g);										
	imprimirGrafo(g);							
	
	recorrerGrafo(g);						
	system("pause");
    return 0;
}

GrafoMatriz ingresarVertices(int n1){			
	TipoG aux;
	GrafoMatriz a(n1);

	for (int i = 0; (i < n1); i++){
		cout << endl << "Ingrese el nombre del vertice No. " << (i+1) << ": ";
		std::getline(cin, aux);
		a.nuevoVertice(aux);
	}
	return a;
}

void ingresarArcos(GrafoMatriz *g){				
	int nv = g->getNumVerts();
	int na;
	TipoG aux;

	for (int i = 0; (i < nv); i++){
		Vertice x = g->getVertice(i);
		cout << endl << "Vertice No. " << x.getNum()+1 << " - " << x.getDato() << " - ";
		cout << endl << "CANTIDAD DE ARCOS DE SALIDA DEL VERTICE" << endl;
		na = leerN(0, 10);
		cin.ignore();
		
		for (int j = 0; (j < na); j++){
			cout << endl << "Identificador del Vertice Destino: ";
			std::getline(cin, aux);
			g->setArco(x.getDato(), aux);
		}
	}
}

void imprimirGrafo(GrafoMatriz g){				
	int nv = g.getNumVerts();
	int na;
	TipoG aux;
	cout << endl << "===============================================";
	cout << endl << "M A T R I Z     D E    A D Y A C E N C I A";

	for (int i = 0; (i < nv); i++){
		Vertice x = g.getVertice(i);
		cout << endl << "Vertice No. " << x.getNum()+1 << " - " << x.getDato() << " - ";
	
		for (int j = 0; (j < nv); j++){
			if (g.adyacente(i,j)){
				Vertice x = g.getVertice(j);
				cout << endl << "\t\t--->" << x.getDato();
			}
		}
	}
	cout << endl << "===============================================";
	cout << endl;
}

void recorrerGrafo(GrafoMatriz g){				
	RecorreGrafo x;
	TipoG aux;
    Cola colaAux;
    Pila pilaAux;
    bool AnchuraAscendente(Cola c, GrafoMatriz g);	
    bool AnchuraDescendente(Cola c, GrafoMatriz g);
    bool ProfundidadAscendente(Pila p, GrafoMatriz g);
    bool ProfundidadDescendente(Pila p, GrafoMatriz g);

    
	cout << endl << "Identificador del Vertice de Origen: ";
	std::getline(cin, aux);
	
	cout << endl << "===============================================";
	cout << endl << "RECORRIDO DEL GRAFO EN ANCHURA\n" << endl;
	int * m = x.recorrerAnchuraMa(g, aux, &colaAux);
	cout << endl << "===============================================";

    cout << "\n El grafo por anchura " << (AnchuraAscendente(colaAux, g)? "SI ": "NO ") << "esta ordenada ascendentemente" << endl;
    cout << "\n El grafo por anchura " << (AnchuraDescendente(colaAux, g)? "SI ": "NO ") << "esta ordenada descendentemente" << endl;
	
	cout << endl << "===============================================";
	cout << endl << "RECORRIDO DEL GRAFO EN PROFUNDIDAD\n" << endl;
	x.recorrerProfMa(g, aux, &pilaAux);
	cout << endl << "===============================================";
    
    cout << "\n El grafo por profundidad " << (ProfundidadAscendente(pilaAux, g)? "SI ": "NO ") << "esta ordenada ascendentemente" << endl;
    cout << "\n El grafo por profundidad " << (ProfundidadDescendente(pilaAux, g)? "SI ": "NO ") << "esta ordenada descendentemente" << endl;
}


bool AnchuraAscendente(Cola c, GrafoMatriz g){
    int tam = c.tamanioCola();
    if (tam <= 1) {
        return true;
    }

    for (int i = c.getFrente(); i < c.getFinal(); i++) {
        if (g.getVertice(c.getVec(i)).getDato() > g.getVertice(c.getVec(i+1)).getDato()){
            return false;
        }
    }

    return true;
}

bool AnchuraDescendente(Cola c, GrafoMatriz g){
    int tam = c.tamanioCola();
    if (tam <= 1) {
        return true;
    }

    for (int i = c.getFrente(); i < c.getFinal(); i++) {
        if (g.getVertice(c.getVec(i)).getDato() < g.getVertice(c.getVec(i+1)).getDato()){
            return false;
        }
    }

    return true;
}

bool ProfundidadAscendente(Pila p, GrafoMatriz g) {
    int longitud = p.longitudPila();
    if (longitud <= 1) {
        return true;
    }

    for (int i = 0; i < longitud - 1; i++) {
        if (g.getVertice(p.getVector(i)).getDato() > g.getVertice(p.getVector(i+1)).getDato()) {
            return false;
        }
    }

    return true;
}

bool ProfundidadDescendente(Pila p, GrafoMatriz g) {
    int longitud = p.longitudPila();
    if (longitud <= 1) {
        return true;
    }

    for (int i = 0; i < longitud - 1; i++) {
        if (g.getVertice(p.getVector(i)).getDato() < g.getVertice(p.getVector(i+1)).getDato()) {
            return false;
        }
    }

    return true;
}