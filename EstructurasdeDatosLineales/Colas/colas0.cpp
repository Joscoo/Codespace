//Implementar colas.h
//Jose Bonilla - 7246


#include <iostream>
#include "colas.h"

using namespace std;

int main(){
    system("color 02");
    Cola c;
    cout << endl << "Elementos de la cola " << c.getFrente() << endl;
    cout << endl << "El TDA" << (c.colaLlena()? " SI " : " NO ") << "esta llena" << endl;
    c.setFinal(EXT - 1);
    cout << endl << "El TDA" << (c.colaLlena()? " SI " : " NO ") << "esta llena" << endl;
    system("pause");
    return 0;
}