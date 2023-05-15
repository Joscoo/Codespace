//Implementar colas.h
//Jose Bonilla - 7246


#include <iostream>
#include "colas.h"

using namespace std;

int main(){
    system("color 02");
    Cola c;
    cout << endl << "Elementos de la cola " << c.getFrente() << endl;
    cout << endl << "El TDA" << (c.colaVacia()? " SI " : " NO ") << "esta vacio" << endl;
    c.setFinal(1);
    cout << endl << "El TDA" << (c.colaVacia()? " SI " : " NO ") << "esta vacio" << endl;
    system("pause");
    return 0;
}